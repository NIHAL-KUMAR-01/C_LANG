#include <stdio.h>
int main()
{
    
    int array1[3][3];
    int array2[3][3];
    int result[3][3];
    //                                       for first arrays
    printf("Enter Elements for Arrays A \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A(%d,%d) ",(i+1),(j+1));
            scanf("%d",&array1[i][j]);
        }
    }
    printf("\n");
    //                                      for second arrays
    printf("Enter Elements for Arrays B \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("B(%d,%d) ",(i+1),(j+1));
            scanf("%d",& array2[i][j]);
        }
    }
    //                                  for result arrays
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }
    /////                                printing resultant
    printf("RESULTANT OF BOTH ARRAYS A AND B \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
   /*

    int arrays3[3][3] = {12, 14, 25, 21, 21, 52, 2, 25, 36};
    printf("ADDRESS OF THE ELEMENTS IN ARRAYS \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("(%d,%d)=%d \n", i, j, arrays3[i][j]);
        }
    }
*/
    return 0;
}