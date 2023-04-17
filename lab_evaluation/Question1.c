// 1. WAP in C to count the digits of a given number using recursion
#include <stdio.h>
int countDigits(int num);
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits in %d = %d\n", num, countDigits(num));
    return 0;
}
int countDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return 1 + countDigits(num / 10);
}