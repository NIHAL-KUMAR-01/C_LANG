//WAP in C to print the array elements using recursion.
#include <stdio.h>
int index1 = 0;

int arrayValueThrower(int array[]){
    printf("%d\n", array[index1]);
    index1 += 1;
    if(index1<5){
        arrayValueThrower(array);
    }
    else{
        return 0;
    }
}

int main(){
    int arr[5] = {25,85,93,21,47};
    arrayValueThrower(arr);
    return 0;
}