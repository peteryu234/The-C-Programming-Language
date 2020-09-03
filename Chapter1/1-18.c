#include <stdio.h>
#define NUMBER  100  /* 允许的输出行的最大数量 */
#define MAXLINE 1000 /* 允许的输出行的最大长度 */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* 删除输入行末尾的空格及制表符 */
int main(void)
{
    int len;				    /* 当前行长度 */
    int num = 0;                /* 累计输出行个数 */
	char line[MAXLINE];		    /* 当前的输入行 */
	char out[NUMBER][MAXLINE];	/* 用于保存输出的行 */

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > 1)
            copy(out[num++], line);
    }
    for (int i = 0; i < num; ++i)
        printf("%s", out[i]);
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
