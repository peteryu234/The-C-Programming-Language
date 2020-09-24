#include <ctype.h>
#include <stdio.h>

#define MAXLINE 100

/* 简单计算器程序 */
int main(void)
{
    double sum, atof(char[]);
    char line[MAXLINE];
    int getLine(char line[], int max);

    sum = 0;
    while (getLine(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
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

/* atof函数：把字符串s转换为相应的双精度浮点数 */
double atof(char s[])
{
    double val, power, result;
    int i, j, sign, epower;

    for (i = 0; isspace(s[i]); i++) /* 跳过空白符 */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    result = sign * val / power;
    if (s[i] == 'e' || s[i] == 'E')
        i++;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (epower = 0; isdigit(s[i]); i++)
        epower = 10 * epower + (s[i] - '0');
    if (sign == 1)
        for (j = 0; j < epower; j++)
            result *= 10.0;
    else
        for (j = 0; j < epower; j++)
            result /= 10.0;
    return result;
}