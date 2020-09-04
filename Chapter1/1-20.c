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
		if (c == '\t')
			printtab(tab);
		else if (c == '\n') {
			tab[indx++] = '\n';
			tab[indx] = '\0';
			printtab(tab);
		}
		else
			tab[indx++] = c;
		if (indx == TABLEN)
			printtab(tab);
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

