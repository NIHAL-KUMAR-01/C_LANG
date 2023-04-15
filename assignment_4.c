// WAP to add and subtract two 3 X 3 matrices
/*
#include <stdio.h>
int main()
{
    int arr1[3][3] = {{2, 5, 6}, {9, 8, 11}, {3, 9, 6}};
    int arr2[3][3] = {{1, 3, 1}, {3, 3, 9}, {1, 4, 3}};
    int add[3][3];
    int sub[3][3];
    printf("Addition of both\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of both\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
// WAP to input a 4 X 4 matrix and print the diagonal elements.
/*
#include<stdio.h>
int main (){
    int array[4][4];
    printf("Enter 16 elements for 4 X 4 matrices:-\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
          scanf("%d",& array[i][j]);

        }
    }
    printf("Diagonal elements are :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i==j){
                printf("%d  ",array[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//                          multiplication

#include <stdio.h>
int main()
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr12[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr12[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                arr12[i][j] += arr1[i][k] * arr2[k][j];
                // printf("i=%d \t j=%d \t k=%d \n",i,j,k);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr12[i][j]);
        }
        printf("\n");
    }
    return 0;
}