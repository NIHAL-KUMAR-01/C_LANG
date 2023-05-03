// 3. Write a program in C to print the elements of an array in reverse order using pointer.

#include <stdio.h>

int main(){
    int *ptr;

    int array[5]={1,2,3,4,5};

    ptr = array;

    int i = 4;
    printf("In reverse manner\n");
    while (i>=0)
    {
        printf("%d ", *(ptr+i));
        i--;
    }

    return 0;
}