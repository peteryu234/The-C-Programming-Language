#include <stdio.h>
#define MAXLINE 1000    /* 最大输入行长度 */

int getLine(char line[], int max);
int strrindex(char source[], char searchfor[]);

char pattern[] = "abc";    /* 待查找的模式 */

/* 找出所有与模式匹配的行 */
int main(void)
{
    char line[MAXLINE];
    int pos = 0;

    while (getLine(line, MAXLINE) > 0) {
        pos = strrindex(line, pattern);
        printf("%d\n", pos);
    }
    return 0;
}

/* getLine函数：将行保存到s中，并返回该行的长度 */
int getLine(char s[], int lim)
{
    int c, i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* strrindex函数：返回t在s中最右边出现的位置，若未找到则返回-1 */
int strrindex(char s[], char t[])
{
    int i, j, k, result = -1;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            result = i;
    }
    return result;
}