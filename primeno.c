#include <stdio.h>

int prime(int number)
{
    int count = 0;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            count += 1;
        }
    }

    if (count == 0)
    {
        printf("Prime number.");
    }
    else
    {
        printf("Not prime.");
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    prime(number);
    return 0;
}
