#include <stdio.h>

/* 打印输入中单词长度的直方图 - 水平方向 */
#define IN  1   /* 在单词内 */
#define OUT 0   /* 在单词外 */
#define MAX 20  /* 单词最大长度 */

int main(void)
{
    int c, i, j, state, length = 0;
    int wlength[MAX];

    for (i = 0; i < MAX; ++i)
        wlength[i] = 0;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                ++wlength[length - 1];
                state = OUT;
                length = 0;
            }
        }
        else {
            state = IN;
            ++length;
        }
    }
    for (i = 0; i < MAX; ++i) {
        printf("%2d\t: ", i + 1);
        for (j = 0; j < wlength[i]; ++j)
            printf("#");
        printf("\n");
    }
    return 0;
}