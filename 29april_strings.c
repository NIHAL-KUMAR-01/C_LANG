/*STRINGS :- Sequence of characters terminated "\0"
STORAGE :- In the form of array of characters 
Examples:- Hello
array[6]="hello"*/
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
int main(){
    char string[]={"WELCOMETOC"};//declaring and initialising the string
    for (int i = 0; i < 13; i++)
    {
        printf("%c ",string[i]);
    }
    printf("\n");
    puts(string);//printing string
    printf("\nThe string is %s",string);//printing string
    return 0;
}
