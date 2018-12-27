#include <stdio.h>

int main(void)
{
    float fahr, celsius;

    printf("fahr to celsius\n");

    for (int i = 0; i <= 300; i += 20)
    {
        fahr = i;
        celsius = (fahr - 32.0) * 5.0 / 9.0;
        printf("%5.0f %7.2f\n", fahr, celsius);
    }
    return 0;
}