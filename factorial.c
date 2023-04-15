#include<stdio.h>
int factorial(int n);
int main(){
    int c;
    printf("Enter no to find its factorial ");
    scanf("%d",& c);
    factorial(c);
    return 0;
}
int factorial(int n){
    int multiple=1;
    for (int i = 1; i <=n; i++)
    {
        multiple=multiple*i;
    }
    printf("The factorial of given number is %d",multiple);
}