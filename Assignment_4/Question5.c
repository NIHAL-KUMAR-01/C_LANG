// 5. How to find vowels and consonants from a given string ?

#include <stdio.h>


int main(){
    char value[100];
    
    printf("Enter a string : ");
    scanf("%s",&value);

    int vowels = 0;
    int consonent = 0;

    int i = 0;

    while (value[i]!='\0')
    {
        if(value[i]=='a' || value[i]=='e' || value[i]=='i' || value[i]=='o' || value[i]=='u' || value[i]=='A' || value[i]=='E' || value[i]=='I' || value[i]=='O' || value[i]=='U'){
            vowels += 1;
        }
        else{
            consonent += 1;
        }

        i++;
    }
    
    printf("Number of vowels : %d\nNumber of consonents : %d", vowels, consonent);
    return 0;
}