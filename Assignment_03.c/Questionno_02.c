#include <stdio.h>

// function to swap two numbers using call by reference
int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 5;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // call the swap function, passing in the addresses of x and y
    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}