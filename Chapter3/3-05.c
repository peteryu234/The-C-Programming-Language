#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void)
{
    char line[100];
    int in, b;
    while (scanf("%d %d", &in, &b) != EOF) {
        itob(in, line, b);
        printf("%d in %d is %s\n", in, b, line);
    }
    return 0;
}

/* itob函数：将数字n转换为以b为底的字符串并保存到s中 */
void itob(int n, char s[], int b)
{
    int i = 0;
    long temp;

    if ((temp = n) < 0)    /* 记录符号 */
        temp = -temp;      /* 使n成为正数 */
    do {
        if (temp % b > 9)
            s[i++] = temp % b - 10 + 'A';
        else
            s[i++] = temp % b + '0';
    } while ((temp /= b) > 0);
    if (n < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

/* reverse函数：倒置字符串s中各个字符的位置 */
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}