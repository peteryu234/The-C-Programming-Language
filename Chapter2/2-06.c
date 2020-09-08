#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main(void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", setbits(num1, 2, 3, num2));
    return 0;
}

int setbits(int x, int p, int n, int y)
{
    int i, bit;

    for (i = 0; i < n; ++i) {
        bit = (y >> i) & 1;
        if (bit) {
            bit <<= p + i;
            x |= bit;
        }
        else {
            bit = ~(1 << (p + i));
            x &= bit;
        }
    }
    return x;
}
