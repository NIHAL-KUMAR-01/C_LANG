#include<stdio.h>
int main()
{
    int i=32, j=-22, k=0, m;
    m = ++i || ++j && ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m);
    return 0;
}
