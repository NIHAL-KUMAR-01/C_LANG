// 1. Write a program in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>

int main(){
    int *ptr1, *ptr2, *max;
    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    ptr1 = &n1;
    ptr2 = &n2;

    max = ptr1;

    if(*ptr2>*max){
        max = ptr2;
    }

    printf("\nMaximum : %d", *max);

    return 0;
}
