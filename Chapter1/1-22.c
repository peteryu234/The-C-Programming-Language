/* need to improve */

#include <stdio.h>

#define BREAK 80

int indx;
void reset(char s[]);
void print(char s[]);

int main(void)
{
	int c, i, newline;
	char output[BREAK+1];
	extern int indx;
	int len = 0;
	
    reset(output);

	indx = 0;

	while ((c = getchar()) != EOF) {
		output[indx++] = c;
		// if (c == ' ') {
		// 	position = indx - 1;
		// 	temp[len] = '\0';
		// 	if (indx + len < BREAK) {
		// 		copy(output, temp, indx);
		// 		indx += len;
		// 	}
		// 	else {
		// 		print(output);
		// 		copy(output, temp, indx);
		// 	}
		// 	tab[indx] = '\0';
		// 	printtab(tab);
		// }
		if (c == '\n') {
			if (newline) {
				output[indx] = '\0';
				print(output);
			}
			else {
				newline = 1;
				indx--;
			}
		}
		else {
			newline = 1;
		}
		if (indx == BREAK - 1) {
			output[indx++] = '\n';
			output[indx] = '\0';
			print(output);
			newline = 0;
		}
	}
	return 0;
}

void reset(char s[])
{
	int i;
	extern int indx;

	for (i = 0; i < BREAK; ++i)
		s[i] = ' ';
	s[BREAK] = '\0';
	indx = 0;
}

void print(char s[])
{
	printf("%s", s);
	reset(s);
}

void copy(char to[], char from[], int indx)
{
    int i = 0;

    while ((to[indx + i] = from[i]) != '\0')
        ++i;
}
