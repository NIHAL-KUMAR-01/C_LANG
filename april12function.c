/*
#include<stdio.h>
int arrsum(int array[]);
int main(){
    printf("Enter 5 elements:-\n");
    int array1[5];
    for (int i = 0; i < 5; i++)
    {   
        scanf("%d",& array1[i]);    
    }
    printf("The sum of arrays is %d",arrsum(array1));
    return 0;
}
int arrsum(int array[]){
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
       sum=sum+array[i]; 
    }
    return sum;
}
*/

/*
#include<stdio.h>
int avesum(int array1[],int array2[]);
int main(){
    int array23[]={10,20,30,40,50};
    int array24[]={1,2,3,4,5};
    printf("The required result is %d",avesum(array23,array24));

    return 0;
}
int avesum(int array1[],int array2[]){
    int sum1=0,sum2=0;
    int avg1,avg2;

    for (int i = 0; i < 5; i++)
    {
        sum1=sum1+array1[i];
    }
    avg1=(sum1)/5;
    for (int i = 0; i < 5; i++)
    {
        sum2=sum2+array2[i];
    }
    avg2=(sum2)/5;
    return (avg1+avg2);
    
}
*/
/*
#include<stdio.h>
int fact(int n);
int main(){
    int num=7;
    
    printf("The factorial of given number is %d",fact(num));
    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else {
        return n*fact(n-1); 
    }
}
*/
#include<stdio.h>
int sum(int n);
int main(){
    int num=10;   
    printf("The Required sum is %d",sum(num));
    return 0;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    else {
        return n+sum(n-1); 
    }
}