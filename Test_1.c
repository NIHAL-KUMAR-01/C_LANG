#include<stdio.h>
int main(){
    int array1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int array2[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int result[4][4]={};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result[i][j]=array1[i][j]+array2[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           printf("%d ",result[i][j]);
        }
       printf("\n") ;
    }
    
    return 0;
}
