// 4. How to find frequency of a character in a string ?

#include <stdio.h>
#include <string.h>

int main(){
    
    char value[100];
    char ch;
    int frequency = 0;

    printf("Enter a string : ");
    scanf("%s", &value);

    printf("Enter a character : ");
    scanf(" %c", &ch);

    int i = 0;
    while (value[i]!='\0')
    {
        if(value[i]==ch){
            frequency ++ ;
        }
        i++;
    }

    printf("\n\nFrequency of %c is : %d", ch, frequency);

    return 0;
}