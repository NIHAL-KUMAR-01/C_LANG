#include <stdio.h>
int numcheck(int n);
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    numcheck(a);
    return 0;
}
int numcheck(int n)
{
    if (n > 0 && n < 10)
    {
        printf("No is positive and less than 10");
    }
    else if (n > 0 && n > 10)
    {
        printf("No is positive and greater than 10");
    }
    else if (n == 10)
    {
        printf("Equal to 10 ");
    }
    else
    {
        printf("Negative number");
    }
    return 0;
}