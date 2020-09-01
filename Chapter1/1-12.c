#include <stdio.h>

#define IN  1   /* 在单词内 */
#define OUT 0   /* 在单词外 */

int main(void)
{
    int c, state;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            state = IN;
            putchar(c);
        }
        else if (state == IN) {
            state = OUT;
            putchar('\n');        
        }
    }
    return 0;
}