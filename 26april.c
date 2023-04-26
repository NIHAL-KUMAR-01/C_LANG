#include<stdio.h>
int main(){
    int array[]={1,2,3,65,98,852,663};
    int *ptr;
    ptr=array;
    int max=*(ptr);
    for (int i = 0; i < 7; i++)
    {
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
    printf("The maximum value of element in array is %d",max);
    return 0;
}