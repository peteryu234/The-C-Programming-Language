#include <stdio.h>

int main(void)
{
    int c;
    int space = 0;

    while ((c = getchar()) != EOF)
        if (c != ' ')
        {
            putchar(c);
            space = 0;
        }
        else if (c == ' ' && space == 0)
        {
            putchar(c);
            space = 1;
        }
        else
            ;
    getchar();
    return 0;
}