#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("MIN signed char is: %d\n", SCHAR_MIN);
    printf("MAX signed char is: %d\n", SCHAR_MAX);
    printf("MIN unsigned char is: %u\n", 0);
    printf("MAX unsigned char is: %u\n", UCHAR_MAX);
    printf("MIN signed short is: %d\n", SHRT_MIN);
    printf("MAX signed short is: %d\n", SHRT_MAX);
    printf("MIN unsigned short is: %u\n", 0);
    printf("MAX unsigned short is: %u\n", USHRT_MAX);
    printf("MIN signed int is: %d\n", INT_MIN);
    printf("MAX signed int is: %d\n", INT_MAX);
    printf("MIN unsigned int is: %u\n", 0);
    printf("MAX unsigned int is: %u\n", UINT_MAX);
    printf("MIN signed long is: %ld\n", LONG_MIN);
    printf("MAX signed long is: %ld\n", LONG_MAX);
    printf("MIN unsigned long is: %lu\n", 0L);
    printf("MAX unsigned long is: %lu\n", ULONG_MAX);
    return 0;
}
