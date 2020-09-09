#include <stdio.h>

/* bitcount函数：统计x中值为1的二进制位数 */
int bitcount(unsigned x);

int main(void) {
    unsigned num;
    scanf("%u", &num);
    printf("%u\n", bitcount(num));
    return 0;
}

int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; b++) {
        x &= (x - 1);
    }
    return b;
}
