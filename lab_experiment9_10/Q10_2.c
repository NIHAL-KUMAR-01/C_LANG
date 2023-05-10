#include<stdio.h>
int main(){
    FILE *file;
    file=fopen("file1.txt","r");
    char data[101];
    while (fgets(data,100,file)!=NULL)
    {
        printf("%s",data);
    }
    fclose(file);
    
}