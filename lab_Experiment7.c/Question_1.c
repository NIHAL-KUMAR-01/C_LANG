//1. Write a C program to add two numbers using pointers.

#include <stdio.h>
int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    printf("-: ADDITION OF TWO NUMBER :-\n");
    printf("Enter First Number:");
    scanf("%d", &num1);
    printf("Enter Second Number:");
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    printf("The sum of %d +%d = %d",*ptr1,*ptr2,(*ptr1 + *ptr2));

    return 0;
}