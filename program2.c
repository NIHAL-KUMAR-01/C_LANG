# include<stdio.h>
// data types in c
/*
multi-line comment

*/
    int main(){
     int age = 22 ;
     float pi = 3.14 ;
     char hashtag = '#' ;
     // there are 32 keywords in c
    printf("hello world");//this a print statement by printf function
    printf("hello world\n");
    printf("hello world\n");
    printf("hello world\n");
    printf("hello world\n hello world 2\n");
    printf("age is %d\n",age);// for integers %d
    printf("pi is %f\n",pi);// for real number %f
    printf("hashtag is %c\n",hashtag);// for character %c
    /////for input 
    //we use the syntax scanf("%d",&age);
    char name[20];
    printf("enter name");
    scanf("%s",&name);
    printf("name entered by you %s",name);
    return 0;
    }
