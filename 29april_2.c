#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    printf("Enter string ");
    scanf("%s",string);
    puts(string);
    printf("Size of above string is %lu\n",sizeof(string));
    //next next
    char string1[]="hello_world";
    string1[0]='m';
    printf("%s",string1);
    // concatenation
    char abc1[]="Turbo ";
    char abc2[]="c & c++";
    strcat(abc1,abc2);
    printf("\n after concatenation\n");
    printf("abc1 is : %s\n\n",abc1);
    int length1=strlen(abc1);
    int length2=strlen(abc2);
    printf("the length of abc1 is %d \nand length of abc2 is %d",length1,length2);

    return 0;
}
