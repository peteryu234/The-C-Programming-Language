#include <stdio.h>

#define TABLEN 8

int indx;

void resettab(char tab[]);
void printtab(char tab[]);

int main(void)
{
	int c, i;
	char tab[TABLEN+1];
	extern int indx;
	
    resettab(tab);

	while ((c = getchar()) != EOF) {
		tab[indx++] = c;
		if (c == '\n' || c == '\t') {
			tab[indx] = '\0';
			printtab(tab);
		}
		else if (indx == TABLEN) {
			for (i = indx - 1; i >= 0 && tab[i] == ' '; --i) 
				;
			if (i == indx - 1)
				tab[++i] = '\0';
			else {
				tab[++i] = '\t';
				tab[++i] = '\0';
			}
			printtab(tab);
		}
	}
	return 0;
}

void resettab(char tab[])
{
	int i;
	extern int indx;

	for (i = 0; i < TABLEN; ++i)
		tab[i] = ' ';
	tab[TABLEN] = '\0';
	indx = 0;
}

void printtab(char tab[])
{
	printf("%s", tab);
	resettab(tab);
}

