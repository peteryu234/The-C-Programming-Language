#include <stdio.h>

/* binsearch函数：在v[0]<=v[1]<=v[2]<=...<=v[n-1]中查找x */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low < high) {
        mid = (low + high) / 2;
        if (x > v[mid])
            low = mid + 1;
        else
            high = mid;
    }
    if (x == v[high])
        return high; /* 找到了匹配的值 */
    else
        return -1; /* 没有匹配的值 */
}

int main(void)
{
    int arr[] = {0,1,2,3,5,6,7,8};
    printf("%d\n",binsearch(9,arr,8));
    return 0;
}