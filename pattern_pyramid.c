#include<stdio.h>
int main(){
    int noofstars,row=0;
    printf("Enter no of stars in 1st row");
    scanf("%d",&noofstars);
    for (int i = noofstars; i >=1; i=i-1)
    {
        row=row+1;
    }
    printf("No of rows =%d\n",row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = noofstars; j>=1; j=j-2)
        {
           printf("*");
        }
        printf("\n");
        noofstars=noofstars-2;
        for (int space = i-1; space>=0; space--)
        {
            printf(" ");
        }
        
    }
    
}