#include<stdio.h>
int natsum(int n);
int main(){
    int c;
    printf("Enter the number up to Which you want Sum: ");
    scanf("%d",&c);
    natsum(c);
}
int natsum(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d",sum);
}