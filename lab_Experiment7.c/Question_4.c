// 4. Write a C program to copy one array to another using pointers.

#include <stdio.h>
int main() {
   int arr1[100], arr2[100], n;
   int *ptr1, *ptr2;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d elements in the first array:\n", n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr1[i]);
   }

   ptr1 = arr1;
   ptr2 = arr2;

   for (int i = 0; i < n; i++) {
      *(ptr2 + i) = *(ptr1 + i);
   }

   printf("\nElements of the first array are:\n");
   for (int i = 0; i < n; i++) {
      printf("%d ", *(ptr1 + i));
   }

   printf("\nElements of the second array are:\n");
   for (int i = 0; i < n; i++) {
      printf("%d ", *(ptr2 + i));
   }

   return 0;
}