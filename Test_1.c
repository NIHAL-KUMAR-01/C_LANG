#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int vowel=0;
    int consonant=0;
    printf("Enter a string: ");
    scanf("%s",& string);
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
            vowel=vowel+1;
        }
        else{
            consonant=consonant+1;
        }
    }
    printf("The total no of consonants is :%d and vowel is %d",consonant,vowel);
    
    return 0;
}
