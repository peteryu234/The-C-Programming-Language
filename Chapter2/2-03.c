#include <stdio.h>
#include <limits.h>

long htoi(char c, char base);
void readall(void);
long result;
int checked;

int main(void)
{
	extern long result;
	extern checked;
	int c;

	result = 0L;
	checked = 0;
	while ((c = getchar()) != EOF) {
		if (!checked) {
			if (c == '0') {
				c = getchar();
				if (c != 'x' && c != 'X') {
					printf("Wrong input, may be started with 0x or 0X.\n");
					readall();
				}
				else
					checked = 1;
				continue;
			}
			checked = 1;
		}
		if (c == '\n') {
			if (result > INT_MAX)
				printf("Overflow\n");
			else
				printf("Result is %d\n", (int)result);
			result = 0L;
			checked = 0;
		}
		else if (c <= '9' && c >= '0')
			result = result * 16L + htoi(c, '0');
		else if (c <= 'F' && c >= 'A')
			result = result * 16L + htoi(c, 'A');
		else if (c <= 'f' && c >= 'a')
			result = result * 16L + htoi(c, 'a');
		else {
			printf("Wrong input, Hex number should be 0-9, a-f or A-F.\n");
			readall();
		}
	}
	return 0; 
}

long htoi(char c, char base)
{
	if (base == 'a' || base == 'A')
		return c - base + 10;
	else
		return c - base;
}

void readall(void)
{
	extern long result;
	extern checked;
	int c;

	while ((c = getchar()) != '\n')
		;
	result = 0;
	checked = 0;
}
