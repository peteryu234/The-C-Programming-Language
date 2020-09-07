#include <stdio.h>
#define MAXLINEIN 100	/* 允许的输入行的最大长度 */

int getLine(char line[], int maxline);

int main(void)
{
    int len;				/* 当前行长度 */
	char line[MAXLINEIN+1];	/* 当前的输入行 */

    while ((len = getLine(line, MAXLINEIN)) > 0) {
        printf("%s", line);
    }
	return 0;
}

/* getLine函数：将一行读入到s中并返回其长度 */
int getLine(char s[], int lim)
{
    int c, i = 0;

    // for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
    //     s[i] = c;
    while (i < lim - 1) {
        c = getchar();
        if (c == '\n') {
            s[i++] = c;
            break;
        }
        if (c == EOF)
            break;
        s[i++] = c;
    }
    if (i == 99) {
        if (c != '\n')
            s[i++] = '\n';
    }
    s[i] = '\0';
    return i;
}
