#include<stdio.h>
int max(int array[100],int n){
    int max=array[0];
    for (int i = 0; i <n ; i++)
    {
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("the max element in array is %d",max);
}
int main(){
    int p,array[100];
    printf("Enter no of element for array:-");
    scanf("%d",&p);
    for (int i = 0; i < p; i++)
    {
        printf("Enter value ");
        scanf("%d",&array[i]);
    }
    max(array,p);
}