#include <stdio.h>

int main(void)
{
    int c, space = 0, tab = 0, newline = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++space;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++newline;
        else
            ;
    }
    printf("space is %d, tab is %d, newline is %d\n", space, tab, newline);
    return 0;
}