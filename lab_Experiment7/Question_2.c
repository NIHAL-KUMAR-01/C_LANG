//2. Write a C program to swap two numbers using pointers.
#include<stdio.h>
int main(){
    int num1,num2;
    int *ptr1,*ptr2;
    printf("Enter num 1 ");
    scanf("%d",& num1);
    printf("Enter num 2 ");
    scanf("%d",& num2);
    ptr1=&num1;
    ptr2=&num2;
    printf("BEFORE SWAPPING \n\n The value of num1=%d\n The value of num2=%d\n",*ptr1,*ptr2);
    ptr1=&num2;
    ptr2=&num1;
    printf("AFTER SWAPPING \n\n The value of num1=%d\n The value of num2=%d",*ptr1,*ptr2);


    return 0;
}


//              OUTPUT
/*
    Enter num 1 25
    Enter num 2 30
    BEFORE SWAPPING 

    The value of num1=25
    The value of num2=30
    AFTER SWAPPING 

    The value of num1=30
    The value of num2=25*/