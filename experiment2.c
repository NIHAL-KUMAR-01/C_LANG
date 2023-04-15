#include<stdio.h>
int main (){
    /*                                                QUESTION 1:
    int num ;
    printf("Enter a number to check even or odd: ");
    scanf("%d",& num);
    if (num%2==0){
        printf("%d is a even number",num);
    }
    else {
        printf("%d is a odd number",num);
    }
    */
//                                                   QUESTION 2:
/*
int choice;
printf(" 1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n");
printf("Enter your choice(1-12): ");
scanf("%d",& choice);
switch (choice)
{
case 1:
    printf("Number of Days = 31");
    break;
case 2:
    printf("Number of Days = 28/29");
    break;
case 3:
    printf("Number of Days = 31");
    break;
case 4:
    printf("Number of Days = 30");
    break;
case 5:
    printf("Number of Days = 31");
    break;
case 6:
    printf("Number of Days = 30");
    break;
case 7:
    printf("Number of Days = 31");
    break;
case 8:
    printf("Number of Days = 31");
    break;
case 9:
    printf("Number of Days = 30");
    break;
case 10:
    printf("Number of Days = 31");
    break;
case 11:
    printf("Number of Days = 30");
    break;
case 12:
    printf("Number of Days = 31");
    break;
default:
    printf("INVALID CHOICE");
    break;
}
*/                  //                                              QUESTION 3
/*
int value = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5-value; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < value; j++)
        {
            printf("%d ", value);
        }
        value++;
        printf("\n");
    } 
    */ //                                                           QUESTION 4 
    //
    /*
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10; 
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
        */                                //                       QUESTION 5
    int num;
    printf("Enter the n value up to which u want to print natural no: ");
    scanf("%d",&num);
    


    return 0;
}