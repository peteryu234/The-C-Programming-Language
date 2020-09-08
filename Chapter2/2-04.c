#include <stdio.h>
#include <stdlib.h>

void squeeze(char s1[], char s2[]);

int main(void)
{
    char *s1, *s2;
    s1 = (char*)malloc(sizeof(char)*100);
    s2 = (char*)malloc(sizeof(char)*10);
    scanf("%s %s", s1, s2);
    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, indx = 0, found = 0;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j]) {
                found = 1;
                break;
            }
        if (!found)
            s1[indx++] = s1[i];
        else
            found = 0;
    }
    s1[indx] = '\0';
}