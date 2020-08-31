#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getLine(void);
void copy(void);

<<<<<<< HEAD
int main(void) {
    int len;
    max = 0;

    while ((len = getLine()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s", longest);
=======
#define IN 1  /* in the word */
#define OUT 0 /* out of the word */

int main(void)
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if ((c == ' ' || c == '\n' || c == '\t') && state == IN)
        {
            state = OUT;
            putchar('\n');
        }
        else if ((c != ' ') && (c != '\t') && (c != '\n'))
        {
            state = IN;
            putchar(c);
        }
    }
    getchar();
>>>>>>> a0ec8a7a72328867a8a4f2a7c69063d8305d4aa3
    return 0;
}

int getLine(void)
{
    int c, i;
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(void)
{
    int i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}