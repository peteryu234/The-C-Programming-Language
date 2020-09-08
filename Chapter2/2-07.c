#include <stdio.h>

int invert(int x, int p, int n);

int main(void) {
    int num;
    do {
        scanf("%d", &num);
        printf("%d\n", invert(num, 2, 3));
    } while (num != -1);
    return 0;
}

int invert(int x, int p, int n)
{
    int i, bit;

    for (i = 0; i < n; ++i) {
        bit = (x >> (p + i)) & 1;
        if (bit) {
            bit = ~(1 << (p + i));
            x &= bit;
        }
        else {
            bit = 1 << (p + i);
            x |= bit;
        }
    }
    return x;
}
