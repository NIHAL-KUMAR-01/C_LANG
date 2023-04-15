#include <stdio.h>
int checkarm(int n);
int main()
{
    int b;
    printf("Enter 3 digit no :-");
    scanf("%d", &b);
    if (b == checkarm(b))
    {
        printf("its a armstrong number");
    }
    else
    {
        printf("Not a armstrong number");
    }
    return 0;
}
int checkarm(int n)
{
    int originalnum, remainder, result = 0;
    originalnum = n;
    while (originalnum != 0)
    {
        remainder = originalnum % 10;
        result += remainder * remainder * remainder;
        originalnum /= 10;
    }
    return result;
}