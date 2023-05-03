// 2. Write a program in C to print all the alphabets using a pointer.

#include <stdio.h>

int main(){
    char *letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int i = 0;
    
    while (*(letter+i)!='\0')
    {
        printf("%c ", *(letter+i));
        i++;
    }
    
    return 0;
}