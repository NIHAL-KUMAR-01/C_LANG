#include<stdio.h>

int main()
{
    int a[5] = {5, 2, 15, 25, 20};
    int i, j, k;
    i = ++a[1];
    j = a[1]++;
    k = a[i++];
    printf("%d, %d, %d", i, j, k);
    return 0;
}