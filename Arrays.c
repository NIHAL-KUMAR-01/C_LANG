#include <stdio.h>
int main()
{
   /*
   int list1[]={25,58,8552,12};
   printf("%d",list1[2]);
   */

   //                                       ACCESSING THE ELEMENTS OF THE ARRAYS THROUGH INDEX POSITIONS
   // int array1[10] = {10, 36, 98, 63, 25, 20, 96, 87, 10}; // 10 elements (int)
   // printf("%d", array1[2]);                               // accessing
   /*
       int arrays2[10];
       int i;
       for ( i = 1; i < 10; i++)
       {
          printf("enter value: ");
          scanf("%d\n",&arrays2[i]);
       }

       for ( i = 0; i < 10; i++)
       {
           printf("%d\n",arrays2[i]);
       }
   */
   /*

       int values[5];

     printf("Enter 5 integers: \n");

     for(int i = 0; i < 5; ++i) {
        scanf("%d", &values[i]);
     }

     printf("Displaying integers: \n");

     // printing elements of an array
     for(int i = 0; i < 5; ++i) {
        printf("%d\n", values[i]);
     }
       */
   /*

   int arrays[10]={10,20,30,40,50,60,70,80,90,100};
   for ( int i = 0; i < 10; i++)
   {
     if (i%2==0)
     {
        arrays[i]=10;
     }
   }
   //displaying elements in arrays[10]
    for(int i = 0; i < 10; ++i) {
     printf("%d ", arrays[i]);}
*/
   /*
      int arrays[10],i;
      printf("Enter 10 elements\n");
      for ( i = 0; i <=9; i=i+1)
      {
         scanf("%d",&arrays[i]);
      }
      printf("Displaying elements \n ");
      for ( i = 0; i <= 9; i++)
      {
         if (arrays[i]==0){
            printf("At Index position %d The value is %d \n",i,arrays[i]);
         }
      //printf("index position %d,and value is%d \n ",i,arrays[i]);
      }

      */
   ////////////////////////////////////           3-D ARRAYS
   /*
int arrays[3][3];
int r, c, sum=0;
for (r = 0; r <= 2; r = r + 1)
{
   for (c = 0; c <= 2; c = c + 1)
   {
      printf("Enter Values: ");
      scanf("%d",&arrays[r][c]);
      sum=sum+arrays[r][c];
   }
}
printf("%d",sum);
*/
   /*
   int arr1[3][3]={{22,54,32},{25,32,21},{25,63,87}};
   for (int i = 0; i <=2; i++)
   {
    for (int j = 0; j <=2; j++)
    {
       printf("%d ",arr1[i][j]);
    }
    printf("\n");
   }
   */
   int arr1[3][3] = {{20, 25, 13}, {25, 32, 14}, {11, 12, 15}};
   int arr2[3][3] = {{2, 5, 13}, {25, 2, 14}, {13, 12, 18}};
   int result[3][3];
   int sum=0;
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         result[i][j] = arr1[i][j] + arr2[i][j];
         
      }
   }
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%d ", result[i][j]);
         sum=sum+result[i][j];
      }
      printf("\n");
   }
   printf("The sum of all elements shown is %d",sum);
   return 0;
}