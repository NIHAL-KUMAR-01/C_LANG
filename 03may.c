
/*
#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i;

    for ( i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int count=0,i=0;
    char string[]={"WELCOME TO CGU"};
    while (string[i]!='\0')//iterate loop till end of string 
    {
       count=count+1;
       i++;
    }
    printf("Length of String [%s] is %d",string,count);
    return 0;
}
*/
#include<stdio.h>
int main(){
int length=0,flag=0;
char string[]={"characters"},ch;
printf("Enter charcater:-");
scanf("%c",&ch);
for (int i = 0;string[i]!='\0'; i++)
{
    if(string[i]==ch){
        flag=1;
        break;
    }
}
if(flag==1){
    printf("Searched character is present in string ");
}
if (flag==0){
    printf("Searched character is not present in string");
}
return 0;
}