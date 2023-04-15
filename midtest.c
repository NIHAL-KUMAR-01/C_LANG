#include <stdio.h>
int main()
{
    int a,i=1;
    printf("enter to print natural no up to");
    scanf("%d",&a);
    do
    {
       printf("%d\n",i);
       i=i+1;
    } while (i<=a);
    
    
    return 0;
}