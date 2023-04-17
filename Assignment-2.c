// Question no 2
 /*
#include<stdio.h>
int main(){
    int n1,n2,sum1=0,sum2=0;
    printf("Enter First no ");
    scanf("%d",& n1);
    printf("Enter Second no ");
    scanf("%d",& n2);
    for (int i = 1; i < n1; i++)
    {
        if(n1%i==0){
            sum1=sum1+i;
        }
    }

    for (int j = 1; j < n2; j++)
    {
        if(n2%j==0){
            sum2=sum2+j;
        }
    }
    if (n1==sum2 && n2==sum1){
    printf("Both Numbers %d and %d are Amicable Numbers.",n1,n2);
    }

    return 0;
}
*/
//QUESTION NO 1.
// Write a program in C that takes as input a set of numbers and
// calculates the mean, variance and standard deviation. (variance
// is defined as Σ [(xi - x)^2]/n - 1 , where xi =i th number in the set, x
// is the mean and n=cardinality of the set ; standard deviation is the
// square root of variance).
/*
#include <stdio.h>
#include <math.h>
int main()
{
    float sum = 0, mean, variance = 0;
    int no;
    printf("Enter no of elements in set ");
    scanf("%d", &no);
    int arrays[no];
    for (int i = 0; i < no; i++)
    {
        printf("Enter Number ");
        scanf("%d", &arrays[i]);
    }
    for (int i = 0; i < no; i++)
    {
        sum = sum + arrays[i];
    }
    mean = sum / no;
    for (int i = 0; i < no; i++)
    {
        variance = variance + ((arrays[i] - mean) * (arrays[i] - mean));
    }
    variance = variance / (no - 1);
    printf("The Mean of given sets of no is %.2f \n",mean);
    printf("The variance of given sets of no is %.2f \n",variance);
    printf("The standard deviation of given sets of no is %.2f \n",pow(variance, 0.5));

    return 0;
}
*/
/*
 Write a C program to accept the basic salary of an employee 
from the user. Calculate the gross salary on the following basis: 
       Basic        HRA      DA
     1 -  4000      10%      50%
    4001 - 8000     20%      60%
    8001 - 12000    25%      70%
   12000 and above  30%      80%
*/

/*
#include <stdio.h>
int main()
{
    float salary,hra,da;
    printf("Enter Basic Salary of an employee ");
    scanf("%f", &salary);
    if (salary>0 && salary<=4000)
    {
        hra=salary*0.1;
        da=salary*0.5;
    }
    else if (salary>4000 && salary<=8000)
    {
        hra=salary*0.2;
        da=salary*0.6;
    }
    else if (salary>8000 && salary<=12000)
    {
        hra=salary*0.25;
        da=salary*0.7;
    }
    else if (salary>12000)
    {
        hra=salary*0.3;
        da=salary*0.8;
    }
    printf("The Gross Salary of an Employee is %.2f",(salary+hra+da));
    

}
*/
/*
#include <stdio.h>

int main(){
    float sumAmount = 0;
    int unit = 0, unitCopy;
    int unitIncreased = 0;

    printf("\nEnter unit of electricity used : ");
    scanf("%d", &unit);

    unitCopy = unit;
    
    if(unit > 300){
        unitIncreased = unit-300;
        sumAmount += unitIncreased*2;
        unit = unit-unitIncreased;
    }
    if(unit>=201 && unit <= 300){
        unitIncreased = unit-200;
        sumAmount += unitIncreased*1.5;
        unit = unit-unitIncreased;
    }
    if(unit<=200){
        sumAmount += unit*1;
    }

    printf("\nTotal Unit : %d\nTotal bill amount = %.2f", unitCopy, sumAmount);
    return 0;
}

*/
#include <stdio.h>

int main(){
    int p;
    printf("Enter no of lines:-");
    scanf("%d",& p);
    int n = p;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (int k = 0; k < n-i; k++)
        {
            printf("* ");
        }

        printf("\n");
        printf("\n");
        
    }
    
    return 0;
}
