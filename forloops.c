#include <stdio.h>
int main()
{
    /*
    int i;
    for ( i = 1; i < 6; i++)
    {
        printf("%d \n",i);
    }
    */
    int i,j, Noofstars, row = 0,spaces=0;
    printf("Enter no of * in first row : ");
    scanf("%d", &Noofstars);
    for (i = Noofstars; i >= 1; i = i - 2)
    {
        row = row + 1;
    }
    printf("No of rows: %d \n", row);

    for ( i = 1; i <= row; i=i+1)
    {
        for (int k=0; k < spaces; k++)
        {
            printf(" ");
        }
    
        for (j = Noofstars; j>=1; j=j-1)
        {
            printf("*");
        }
        printf("\n");
        Noofstars=Noofstars-2;
        spaces=spaces+1;
    }
    return 0;
}