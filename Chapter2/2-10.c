#include <stdio.h>

/* lower函数：把字符c转换为小写形式；只对ASCII字符集有效 */
int lower(int c);

int main(void) {
    char c;
    scanf("%c", &c);
    printf("%c\n", lower(c));
    return 0;
}

int lower(int c)
{
    int result;
    result = c >= 'A' && c <= 'Z' ? (c - 'A' + 'a') : c;
    return result;
}
