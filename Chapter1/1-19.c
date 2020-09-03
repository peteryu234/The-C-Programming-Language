#include <stdio.h>

#define MAXLINE 1000 /* 允许的输入行的最大长度 */

int getLine(char line[], int maxline);
void reverse(char s[], int len);

/* 颠倒输入行中的字符顺序 */
int main(void)
{
    int len;				    /* 当前行长度 */
	char line[MAXLINE];		    /* 当前的输入行 */

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > 1) {
            reverse(line, len);
            printf("%s", line);
        }
    }
	return 0;
}

/* getLine函数：将一行读入到s中并返回其长度 */
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    while (s[i-1] == ' ' || s[i-1] == '\t')
        --i;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy函数：将from复制到to;这里假定to足够大 */
void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}

/* reverse函数：将字符串s中的字符顺序颠倒过来 */
void reverse(char s[], int len)
{
    int start = 0, end = len - 2;
    int c;

    while (start < end) {
        c = s[start];
        s[start] = s[end];
        s[end] = c;
        ++start;
        --end;
    }
}
