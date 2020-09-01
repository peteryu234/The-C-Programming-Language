#include <stdio.h>

/* 打印输入中各个字符出现频度的直方图 */
int main(void)
{
    int c, i, j;
    int ch[26];

    for (i = 0; i < 26; ++i)
        ch[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'z')
            ++ch[c - 'a'];

    for (i = 0; i < 26; ++i) {
        printf("%c\t: ", 'a' + i);
        for (j = 0; j < ch[i]; ++j)
            printf("#");
        printf("\n");
    }
    return 0;
}