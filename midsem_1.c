#include <stdio.h>
int main()
{
    /*
    int array[10];
    int sum=0;
    printf("Enter 10 array:\n");
    for (int i = 0; i < 10; i++)
    {
      scanf("%d",&array[i]);
      sum=sum+array[i];

    }
    printf("The sum of arrays is %d",sum);
    */
    /*
     int array1[3][3];
     int array2[3][3];
     int sum[3][3];
     printf("Enter 9 elements for array 1 :-\n");
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             scanf("%d", &array1[i][j]);
         }
     }
     printf("Enter 9 elements for array 2 :-\n");
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             scanf("%d", &array2[i][j]);
         }
     }
     printf("sum of both arrays \n");
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             sum[i][j] = array1[i][j] + array2[i][j];
         }
     }
     printf("PRINTING RESULTANT\n");
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             printf("%d ", sum[i][j]);
         }
         printf("\n");
     }
     return 0;
     */
    int arrays[13];
    int element;
    printf("Enter 13 elements:-\n");
    for (int i = 0; i < 13; i++)
    {
        scanf("%d", &arrays[i]);
    }
    printf("Enter element to search ");
    scanf("%d", &element);
    for (int j = 0; j < 13; j++)
    {
        if (arrays[j] == element)
        {
            printf("%d is found", element);
            return 0;
        }
    }
    printf("!!!!!!!!!!Not found !!!!!!");
}
