#include <stdio.h>

float convert(float fahr);

int main(void)
{
	float fahr;

	printf("Fahr to Celsius\n");

	for (fahr = 0.0; fahr <= 300.0; fahr += 20.0)
		printf("%4.0f\t%6.1f\n", fahr, convert(fahr));
	
	return 0;
}

float convert(float fahr)
{
	return (fahr - 32.0) * 5.0 / 9.0;
}
