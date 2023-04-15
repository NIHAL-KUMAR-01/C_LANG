#include<stdio.h>

    //FUNCTIONS 
    /*Aspects Related To Function 
    1> FUNCTION PROTOTYPE
    2> FUNCTION CALL
    3> FUNCTION ARGUMENTS AND PARAMETERS
    4> FUNCTION DEFINITION */
    
    int add(int a ,int b)
    {
        int sum=a+b;
        return(sum);
    }
int main(){
    int a,b;
    printf("Enter First & second no:- ");
    scanf("%d %d",&a,&b); ;

    printf("%d",add(a,b));
}

