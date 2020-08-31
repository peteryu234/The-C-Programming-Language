#include <stdio.h>

int main(void)
{
    float fahr, celsius;

    printf("Fahr to Celsius\n");

    for (fahr = 300.0; fahr >= 0.0; fahr -= 20.0) {
        celsius = (fahr - 32.0) * 5.0 / 9.0;
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
    return 0;
}