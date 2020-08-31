#include <stdio.h>

int main(void)
{
    float celsius, fahr;

    printf("Celsius to Fahr\n");

    for (celsius = -100.0; celsius <= 100; celsius += 10.0) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
    }
    return 0;
}