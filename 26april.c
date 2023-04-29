/*
#include<stdio.h>
int main(){
    int array[]={1,2,3,65,98,852,663};
    int *ptr;
    ptr=array;
    int max=*(ptr);
    for (int i = 0; i < 7; i++)
    {
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
    printf("The maximum value of element in array is %d",max);
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,*ptr;
    printf("\nHow many blocks of Memory ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter Numbers:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\nThe Numbers are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",ptr[i]);
    }
    
    return 0;
}