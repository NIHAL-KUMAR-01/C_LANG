//3. Write a C program to input and print array elements using pointer.
#include<stdio.h>
int main(){
    int array[100]={};
    int element,*ptr;
    printf("Enter no of element in array ");
    scanf("%d",&element);
    for ( int i = 0; i < element; i++)
    {
        printf("Enter value :-");
        scanf("%d",& array[i]);
    }
    ptr=array;
    for (int i = 0; i < element; i++)
    {
        printf("%d  ",*(ptr+i));
    }
    return 0;
}
//              OUTPUT
/*
        Enter no of element in array 5
        Enter value :-2
        Enter value :-3
        Enter value :-4
        Enter value :-5
        Enter value :-6
        2  3  4  5  6  */