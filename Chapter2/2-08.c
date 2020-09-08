#include <stdio.h>

int rightrot(unsigned int x, int n);
unsigned int mask;

int main(void) {
    extern unsigned int mask;
    unsigned int num;

    mask = 0;
    mask = ~mask - (~mask >> 1);
    scanf("%u", &num);
    printf("%u\n", rightrot(num, 3));
    return 0;
}

int rightrot(unsigned int x, int n)
{
    extern unsigned int mask;
    int i, bit;

    for (i = 0; i < n; ++i) {
        bit = x & 1;
        x >>= 1;
        if (bit) {
            x |= mask;
        }
    }
    return x;
}
