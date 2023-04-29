#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *array,*max;                // static memory allocation
    array = (int*)malloc(10); // Dynamic memory allocation
    printf("\n Enter Array Elements \n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    max = array;
    for (int j = 0; j < 10; j++)
    {
        if (*(array + j)>*max){
            *max=*(array+j);
        }
    }
    printf("\n\n\nMaximum Element is %d",*max);
    return 0;
}