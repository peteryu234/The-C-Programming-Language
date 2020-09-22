#include <stdio.h>
#include <string.h>

void itoa(int n, char s[], int l);
void reverse(char s[]);

int main(void)
{
    char line[100];
    int in, l;
    while (scanf("%d %d", &in, &l) != EOF) {
        itoa(in, line, l);
        printf("%d in %d is:%s\n", in, l, line);
    }
    return 0;
}

/* itoa函数：将数字n转换为长度为l的字符串并保存到s中 */
void itoa(int n, char s[], int l)
{
    int i = 0;
    long temp;

    if ((temp = n) < 0)    /* 记录符号 */
        temp = -temp;      /* 使n成为正数 */
    do {
        s[i++] = temp % 10 + '0';  /* 取下一个数字 */
    } while ((temp /= 10) > 0);    /* 删除该数字 */
    if (n < 0)
        s[i++] = '-';
    while (i < l)
        s[i++] = ' ';
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