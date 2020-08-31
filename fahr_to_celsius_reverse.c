#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
    float fahr, celsius;

    printf("fahr to celsius\n");

    for (int i = UPPER; i >= LOWER; i -= STEP)
    {
        fahr = i;
        celsius = (fahr - 32.0) * 5.0 / 9.0;
        printf("%5.0f %7.2f\n", fahr, celsius);
    }
    return 0;
}