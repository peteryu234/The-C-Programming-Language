#include <stdio.h>

#define IN 1  /* in the word */
#define OUT 0 /* out of the word */

int main(void)
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if ((c == ' ' || c == '\n' || c == '\t') && state == IN)
        {
            state = OUT;
            putchar('\n');
        }
        else if ((c != ' ') && (c != '\t') && (c != '\n'))
        {
            state = IN;
            putchar(c);
        }
    }
    getchar();
    return 0;
}