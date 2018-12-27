#include <stdio.h>

int main(void)
{
    float fahr, celsius;

    printf("celsius to fahr\n");

    for (int i = -100; i <= 100; i += 10)
    {
        celsius = i;
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%7.2f %7.2f\n", celsius, fahr);
    }
    return 0;
}