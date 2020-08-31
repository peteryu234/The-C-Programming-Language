#include <stdio.h>

float fahrToCelsius(float fahr);

int main(void)
{
    printf("fahr to celsius\n");

    for (float fahr = .0; fahr <= 300; fahr += 20.0)
    {
        printf("%3.0f %6.1f\n", fahr, fahrToCelsius(fahr));
    }
    return 0;
}

float fahrToCelsius(float fahr)
{
    return (fahr - 32.0) * 5.0 / 9.0;
}