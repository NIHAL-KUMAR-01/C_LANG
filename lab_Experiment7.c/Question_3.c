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