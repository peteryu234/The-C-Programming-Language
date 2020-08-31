#include <stdio.h>

#define IN 1  /* in the word */
#define OUT 0 /* out of the word */

int main(void)
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("line is %d, word is %d, char is %d\n", nl, nw, nc);
    getchar();
    return 0;
}