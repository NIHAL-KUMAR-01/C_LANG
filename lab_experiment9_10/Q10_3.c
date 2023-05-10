// WAP to Display alternate characters from file
#include<stdio.h>
int main(){
    FILE *file;
    int count=0;
    file=fopen("file1.txt","r");
    char c;
    while ((c = fgetc(file))!=EOF)
    {
        if(count%2==0){
            printf("%c",c);
        }
        count ++;
    }
    fclose(file);
    return 0;

}