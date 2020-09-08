#include <stdio.h>
#include <stdlib.h>

int any(char s1[], char s2[]);

int main(void)
{
    char *s1, *s2;
    int pos;
    s1 = (char*)malloc(sizeof(char)*100);
    s2 = (char*)malloc(sizeof(char)*10);
    scanf("%s %s", s1, s2);
    pos = any(s1, s2);
    printf("%d\n", pos);
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j]) {
                return i;
            }
    }
    return -1;
}