#include <stdio.h>
#define MAXLINEIN 100	/* 允许的输入行的最大长度 */

int getLine(char line[], int maxline);
int expand(char s[], char t[], int in);

int main(void)
{
    int c, i, len;
    char line[MAXLINEIN+1];	/* 当前的输入行 */
    char outline[2*MAXLINEIN+1]; /* 输出行 */

    while ((len = getLine(line, MAXLINEIN)) > 0) {
        expand(line, outline, len);
        printf("%s", outline);
    }
	return 0;
}

int getLine(char s[], int lim)
{
    int c, i = 0;

    for (i = 0; i < lim && (c = getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int expand(char s[], char t[], int in)
{
    int c, p = '\0', i = 0, o = 0;
    for (i = 0; i < in; i++) {
        c = s[i];
        if (c == '-') {
            if (p == '\0' || s[i+1] == '\n') {
                t[o++] = c;
            }
            else {
                while (++p < s[i+1])
                    t[o++] = p;
            }
        }
        else {
            t[o++] = c;
            p = c;
        }
    }
    t[o] = '\0';
    return o;
}