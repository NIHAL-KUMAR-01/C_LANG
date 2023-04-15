/*
#include<stdio.h>
int main(){
    // WAP to enter marks of a student and find percentage of marks using array.
    int arr1[5];
    float sum=0;
    printf("Enter marks of 5 subject out of 100:-\n");
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
       sum=sum+arr1[i];
    }
    printf("The marks obtained by student is %.2f %%",(sum/5));


    return 0;
}
*/
// WAP to store 13 elements in an 1D array and search an element which is given by the user.
/*
#include <stdio.h>
int main()
{
    int arrays[13];
    int element;
    printf("Enter 13 elements :-\n");
    for (int i = 0; i < 13; i++)
    {
        scanf("%d", &arrays[i]);
    }
    printf("Enter element to search in arrays:-");
    scanf("%d", &element);

    for (int j = 0; j < 13; j++)
    {
        if (arrays[j] == element)
        {
            printf("Yes,%d is in the array", element);
            return 0;
        }
    }
    printf("!! Not found !!");
    return 0;
}
*/
/*
//Write a c program to reverse the array elements.

# include<stdio.h>
int main (){
    int array1[6] ={25,12,32,41,63,16};
    int array2[6];
    for (int i = 0; i < 6; i++)
    {
        array2[5-i]=array1[i];
    }
    for (int i = 0; i < 6; i++)
    {
       printf("%d\n",array2[i]);
    }
    
    return 0;
}*/
//reversing array
#include<stdio.h>
int main(){
    int arrays2[5]={25,2,3,10,36};
    for (int i = 4; i >= 0; i--)
    {
       printf("%d \n",arrays2[i]);
    }
    
    return 0;
}