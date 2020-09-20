#include <stdio.h>
#define MAXLINEIN 100	/* 允许的输入行的最大长度 */

int getLine(char line[], int maxline);
int escape(char s[], char t[], int in);

int main(void)
{
    int c, i, len;
    char line[MAXLINEIN+1];	/* 当前的输入行 */
    char outline[2*MAXLINEIN+1]; /* 输出行 */

    while ((len = getLine(line, MAXLINEIN)) > 0) {
        escape(line, outline, len);
        printf("%s\n", outline);
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

int escape(char s[], char t[], int in)
{
    int c, i = 0, o = 0;
    for (i = 0; i < in; i++) {
        c = s[i];
        switch (c) {
        case '\t':
            t[o++] = '\\';
            t[o++] = 't';
            break;
        case '\n':
            t[o++] = '\\';
            t[o++] = 'n';
            break;
        default:
            t[o++] = c;
            break;
        }
        t[o] = '\0';
    }
    return o;
}