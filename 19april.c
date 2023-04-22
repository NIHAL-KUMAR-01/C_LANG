#include <stdio.h>
int main()
{
    int e1, e2;
    int array1[] = {100, 200, 300, 400, 500};
    int array2[] = {10, 20, 30, 40, 50};
    int *ptr1, *ptr2;
    ptr1 = array1;
    ptr2 = array2;
    for (int i = 0; i < 5; i++)
    {
        printf("Array1[%d] \t %d \n",i,*(ptr1 + i));
        printf("Array1[%d] \t %d \n",i,*(ptr2 + i));
        e1 = *(ptr1 + i);
        e2 = *(ptr2 + i);
        int add=e1+e2;
        printf("Addition is %d \t",add);
        printf("\n\n");
    }

    return 0;
}