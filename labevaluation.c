 #include <stdio.h>
int main() {
    /* ///                                  TO CHECK PALINDROME OR NOT
  int n, reversed = 0, remainder, original;
    printf("Enter a 3-digit no: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
*/  //                                          3-DIGIT SUMMATION
/*                               
int a,b,c,d,sum,t1;
      printf("Enter 3-Digit Number: ");
      scanf("%d",&a);
      c=a/100;
      t1=a%100;
      b=t1%10;
      d=t1/10;
      sum=b+d+c;
      printf("\nSum of All 3-Digits : %d",sum);
    */  //                                    ARMSTRONG NUMBER
    /*
int num, oNum, r, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    oNum = num;

    while (oNum != 0) {
        r = oNum % 10; 
       result += r * r * r; //r-remainder
       oNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
        */
//                                     PRINTING  PATTERN QUESTION 1
/*
    int index = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ", index);
            index+=1;
        }
        printf("\n");
        index = 1;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3-i; j++)
        {
            printf("%d ", index);
            index+=1;
        }
        printf("\n");
        index = 1;
    }
*/
//                                      PRINTING PATTERN QUESTION 2
    int i,j,count=20;
    for (i=1; i <= 4;  i++)
    {
        for (j=1;j<=4; j++)
        {
            printf("%d ",count);
            count++;
        }
         printf("\n");
    }
    
    
 
    return 0;
}