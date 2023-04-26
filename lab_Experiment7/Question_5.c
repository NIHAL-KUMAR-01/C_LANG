//SWAPPING OF TWO ARRAYS
#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for (int i = 0; i < 5; i++) {
        *(ptr1 + i) = *(ptr1 + i) + *(ptr2 + i);
        *(ptr2 + i) = *(ptr1 + i) - *(ptr2 + i);
        *(ptr1 + i) = *(ptr1 + i) - *(ptr2 + i);
    }

    printf("After swapping, arr1 is: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr1 + i));
    }

    printf("\nAfter swapping, arr2 is: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));
    }

    return 0;
}

//              OUTPUT
/*
        After swapping, arr1 is: 6 7 8 9 10 
        After swapping, arr2 is: 1 2 3 4 5 */