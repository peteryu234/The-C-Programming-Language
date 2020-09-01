#include <stdio.h>

#define IN  1   /* 在单词内 */
#define OUT 0   /* 在单词外 */

/* 统计输入的行数，单词数与字符数 */
int main(void)
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
} /* 需要新的一行来保证统计程序行数正确 */
