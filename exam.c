/*
#include<stdio.h>
int main(){
    int array[100];
    int num;
    int search;
    printf("Enter no of elements:");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter %dst element",i);
        scanf("%d",&array[i]);
    }
    printf("\n\nDISPLAYING DATA\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",array[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&search);
    for (int i = 0; i < num; i++)
    {
        if (array[i]==search)
        {
            printf("%d is found in your array",search);
        }

    }


    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int num,originalnum,remainder,result=0;
    printf("Enter Your Number:-");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0){
        remainder=originalnum%10;
        result+=remainder*remainder*remainder;
        originalnum/=10;
    }
    if (result==num)
    {
        printf("Armstrong Num");
    }
    else{
        printf("Not a armstrong num");
    }
    return 0;
}
*/
/*
/////////////////////////////////PALINDRONE NUMBER
#include<stdio.h>
int main(){
    int num,reversed=0,remainder,original;
    printf("Enter number");
    scanf("%d",&num);
    original=num;
    while (num!=0)
    {
       remainder=num%10;
       reversed=reversed*10+remainder;
       num/=10;
    }
    if (original==reversed)
    {
        printf("palindrome number");
    }

    return 0;
}
*/
/*
////////////////////////////////////SUM OF 3 DIGIT NUMBER
#include<stdio.h>
int main(){
    int a,b,c,d,t1;
    printf("Enter 3 digit number to find its sum__");
    scanf("%d",&a);
    c=a/100;
    t1=a%100;
    b=t1%10;
    d=t1/10;
    int sum=b+c+d;
    printf("The sum is %d",sum);

    return 0;
}
*/
/*
////////////////////////////////SWAPPING OF 2 NUMBERS
#include<stdio.h>
int main(){
    int n1,n2,n3;
    n1=20;
    n2=30;
    n3=n2;
    n2=n1;
    n1=n3;
    printf("The value of now n1=%d and n2=%d",n1,n2);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int array1[3][3]={1,2,3,4,5,6,7,8,9};
    int array2[3][3]={1,2,3,4,5,6,7,8,9};
    int array3[3][3]={0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
               array3[i][j]+=array1[i][k]*array2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",array3[i][j]);
        }
        printf("\n");
    }
 return 0;

}
*/
/*
#include<stdio.h>
int main(){
    int array[5];
    int max=0;
    int min=0;
    printf("Enter 5 element: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    for (int i = 0; i < 5; i++)
    {
        if(array[i]>max){
            max=array[i];
        }
        if (array[i]<min){
            min=array[i];
        }
    }
    printf("Maximum=%d and Minimum=%d",max,min);
    return 0;
}
*/
//////////////////////////////FEET INCH CONVERTOR
/*
#include <stdio.h>
struct convert
{
    int feet;
    int inch;
};
int main()
{

    struct convert s1, s2;
    s1.feet = 12;
    s1.inch = 12;
    s2.feet = 12;
    s2.inch = 14;
    int tfeet = s1.feet + s2.feet;
    int tinch = s1.inch + s2.inch;
    printf("The total feet is %d and inch is %d", (tfeet + (tinch / 12)), (tinch % 12));

    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char name[]="12345";
    int data=0;
    int temp=0;
    for (int i = 0; i < 5; i++)
    {
        temp=name[i]-'0';
        data=data*10+temp;
    }
    printf("%d",data);
    return 0;
}
*/
/*
#include<stdio.h>
struct student
{
    char name[100];
    char regno[100];
    char branch[100];
};
int main(){
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d Name:-",i);
        scanf("%s",& s[i].name);
        printf("Enter %d registration no:-",i);
        scanf("%s",& s[i].regno);
        printf("Enter %d branch:-",i);
        scanf("%s",& s[i].branch);
    }
    printf("\n\n DISPLAYING DATA\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudents name is %s \nRegistraion no %s \nBranch is %s",s[i].name,s[i].regno,s[i].branch);
    }

}
*/
/*
#include<stdio.h>
int main(){
    int num1,num2;
    int *ptr1,*ptr2;
    printf("Enter  1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number: ");
    scanf("%d",&num2);
    ptr1=&num1;
    ptr2=&num2;
    printf("The sum of %d and %d is %d",*ptr1,*ptr2,*ptr1+*ptr2);
    return 0;
}
*/
/*

#include<stdio.h>
int main(){
    int num1,num2,*ptr1,*ptr2,temp;
    printf("Enter 1st num: ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    ptr1=&num1;
    ptr2=&num2;//ptr1=5,ptr2=10
    printf("The value of num 1 is %d and num 2 is %d\n",*ptr1,*ptr2);
    temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
    printf("The value of num 1 is %d and num 2 is %d",*ptr1,*ptr2);
    return 0;
}
*/
/*
#include<stdio.h>
int main (){
    int array1[5]={1,2,3,4,5};
    int *ptr;
    ptr=array1;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(ptr+i));
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int array1[5]={2,5,6,3,9};
    int array2[5]={};
    int *ptr1,*ptr2;
    ptr1=array1;
    ptr2=array2;
    for (int i = 0; i < 5; i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    for (int  i = 0; i < 5; i++)
    {
        printf("%d ",*(ptr2+i));
    }
}
*/

/*
#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main(){
    char string1[100];
    int vcount=0,ccount=0;
    printf("Enter a string Dont use a whitespace :-");
    scanf("%s",&string1);
    for (int i = 0; i < strlen(string1); i++)
    {
        if(string1[i]=='a'||string1[i]=='e'||string1[i]=='i'||string1[i]=='o'||string1[i]=='u'||string1[i]=='A'||string1[i]=='E'||string1[i]=='I'||string1[i]=='O'||string1[i]=='U'){
            vcount=vcount+1;
        }
        else{
            ccount=ccount+1;
        }
    }
    printf("The total number of vowel is %d and consonant is %d",vcount,ccount);

    return 0;
}
*/
/*
#include<stdio.h>
int fibonacci(int num);
int main(){
    int num;
    printf("Enter the terms up to which you want to print Fibonaaci series: ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ",fibonacci(i));
    }

    return 0;
}
int fibonacci(int num){
    if(num==0||num==1){
        return num;
    }
    else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}
*/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char ostring[] = "madam";
    char tstring[strlen(ostring)];

    for (int i = 0; i < strlen(ostring); i++) {
        tstring[i] = ostring[strlen(ostring) - 1 - i];
    }
    tstring[strlen(ostring)] = '\0';

    printf("Original string: %s\n", ostring);
    printf("Reversed string: %s\n", tstring);

    if (strcmp(ostring, tstring) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = (int*)malloc(3 * sizeof(int));

    array[0] = 50;
    array[1] = 0;
    array[2] = -50;

    for (int i = 0; i < 3; i++) {
        printf("%d ", array[i]);
    }

    // free(array)

    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    int largest;
    int arr[5]={1,2,3,4,5};
    int *array=(int*)malloc(5*sizeof(int));
    array=arr;
    largest=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("largest is %d",largest);
    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int count=1;
    char ostring[100];
    printf("Enter string:-");
    gets(ostring);
    for (int i = 0; i < strlen(ostring); i++)
    {
        if (ostring[i]==' ')
        {
            count=count+1;
        }

    }
    printf("%d",count);
}
*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int count[26] = {0};

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    // Calculate the frequency of characters in string 1
    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
    }

    // Subtract the frequency of characters in string 2
    for (int i = 0; str2[i] != '\0'; i++) {
        count[str2[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Entered strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Entered strings are anagrams.\n");
    return 0;
}
*/
/*
# include <stdio.h>
# include <string.h>

int main()
{
int n,x=0;

  printf("Input an integer number: ");
  scanf("%d",&n);
       while (n != 1)
       {
            if (n % 5 == 0)
            {
                n /= 5;
            }
            else if (n % 3 == 0)
            {
                n /= 3;
            }
            else if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                printf("It is not an ugly number.\n");
                x = 1;
                break;
            }
        }
                if (x==0)
                {
                printf("It is an ugly number.\n");
                }
}
*/
/*
#include<stdio.h>
int main(){
    int num1,num2,sum1=0,sum2=0;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    for (int i = 1; i < num1; i++)
    {
        if(num1%i==0){
            sum1=sum1+i;
        }
    }
    for (int j = 1 ; j < num2; j++)
    {
        if(num2%j==0){
            sum2=sum2+j;
        }
    }
    if(num1==sum2 && num2==sum1){
        printf("amangram numbers");
    }
}
*/
/*
#include<stdio.h>
#include<string.h>
int main(){
    char string[100]="cv raman global university";
    char search;
    int count=0;
    printf("Enter char to search");
    scanf("%c",&search);
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]==search){
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    FILE *file;
    file=fopen("texting5.txt","a");
    fprintf(file,"%s","hello babu \n bhaiya");
    fclose(file);
    return 0;
}

// #include<stdio.h>
// int main(){
//     FILE *file;
//     file=fopen("texting.txt","r");
//     char data[100];
//     while(fgets(data,100,file)){
//         printf("%s",data);
//     }
//     fclose(file);
//     return 0;
// }