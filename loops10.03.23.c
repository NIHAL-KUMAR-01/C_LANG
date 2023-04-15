#include<stdio.h>

int main(){
    //TYPES OF LOOP________________________________________WHILE LOOPS____________
    /*
    int i,j;
    i=0;
    while (i<4)
    {
         j=0;
         while(j<4){
            printf("* ");
            j=j+1;
         }
         printf("\n");
         i=i+1;
    }*/
    /*
    int i,j;
    i=0;
    
    while (i <4) {
        j=0;
        while (j<i+1)
        {
            printf("* ");
            j=j+1;
        }
        printf(" \n");                                        
        i=i+1;
    }
    */
    ////////////////////////////////////WHILE LOOP 
    /*
    int i,sumvalue ;
    i=1;
    sumvalue=0;
    while (i <=10)
    {
        sumvalue=sumvalue+i*i;
        i=i+1;
    }
    printf("THE SUM OF 1^2 + 2^2 + 3^2 ...... 10^2 = %d",sumvalue);
    */
    //////////////////////////////            DO-WHILE LOOPS ///////////////////////////
    /*
    int i=1;
    do
    {
        i=i+1;
        printf("hello\n");
    } while (i<=3);
    */
    //_____________________________________________FIBONACCI SERIES ______________________________________________
/*
     int n1=0,n2=1,n3,i=0,c;
     printf("HOW MANY TERMS OF FIBONACCI YOU WANT TO PRINT:");
     scanf("%d",&c);
     printf("Fibonacci series are:- ");
     
     do 
     {
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        i=i+1;
    
     } while (i<c);
    */
   ///_______________________________________________FOR LOOP _____________________________________
    
    int row=1;
    for (int i=11; i>=1; i=i-2)
    {
        row=row+1;
            023
            
    }

    
    return 0;
}