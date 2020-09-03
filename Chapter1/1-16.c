#include <stdio.h>
#define MAXLINEIN 100	/* 允许的输入行的最大长度 */
#define MAXLINEOUT 1000 /* 允许的输出行的最大长度 */

int getLine(char line[], int maxline);
void copy(char to[], char from[], int position);

/* 打印最长的输入行 */
int main(void)
{
    int len;				/* 当前行长度 */
    int slen = 0;           /* 累计行长度 */
    int max = 0;			/* 目前为止发现的最长行的长度 */
	char line[MAXLINEIN];		/* 当前的输入行 */
	char longest[MAXLINEOUT];	/* 用于保存最长的行 */

    while ((len = getLine(line, MAXLINEIN)) > 0) {
        if (len == MAXLINEIN - 1 && line[MAXLINEIN - 2] != '\n') {
            copy(longest, line, slen);
            slen += MAXLINEIN - 1;
            continue;
        }
        else {
            copy(longest, line, slen);
            slen += len;
        }
        if (slen > max) { 
            max = slen;
            slen = 0;
        }
    }
    if (max > 0)	/* 存在这样的行 */
        printf("%d\n", max);
        printf("%s", longest);
	return 0;
}

/* getLine函数：将一行读入到s中并返回其长度 */
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy函数：将from复制到to;这里假定to足够大 */
void copy(char to[], char from[], int position)
{
    int i = 0;

    while ((to[position + i] = from[i]) != '\0')
        ++i;
}
