#include <stdio.h>

int main(void)
{
    int c = 1;

    while (c) {
        c = getchar() != EOF;
        printf("%d\n", c);
    }
    return 0;
}