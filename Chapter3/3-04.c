#include <stdio.h>
#include <limits.h>
#include <string.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void)
{
    char line[100];
    itoa(INT_MIN, line);
    printf("%d, %s\n", INT_MIN, line);
    return 0;
}

/* itoa函数：将数字n转换为字符串并保存到s中 */
void itoa(int n, char s[])
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