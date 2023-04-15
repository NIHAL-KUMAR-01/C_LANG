/*
#include<stdio.h>
void check(int);//Prototype
int main()
{
    int num;
    for(int i=0;i<5;i=i+1)
    {
        printf("\n Enter Number ");
        scanf("%d",&num);
        check(num); // Call the function
    }// End of loop
}//End of main
//Function Definition
void check(int N)
{
    if(N>10)
        printf("\n Greater than 10");
    else if(N<10 && N>=0)
        printf("\n less than 10");
    else if(N<0)
        printf("\n Negative Number");
}// End of function check()
*/
//////////////////////////////////////////FINDING SQUARE OF A NUMBER////////////////////////////////
/*
#include<stdio.h>
#include<math.h>
int square(int a);
int main(){
    int n;
    printf("Enter no to find square:-");
    scanf("%d",&n);
    printf("Square of given no is %d",square(n));

}

int square(int a){
    int result=powf(a,2);
    return result;
}
*/
#include<stdio.h>
int addition(int a,int b);
int main(){
    int n1,n2;
    printf("Enter first number ");
    scanf("%d",& n1);
    printf("Enter Second number ");
    scanf("%d",& n2);
    printf("The addition of %d and %d is %d",n1,n2,addition(n1,n2));
}
int addition(int a ,int b){
    int result=a+b;
     return result ;
}