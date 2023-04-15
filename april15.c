/*
#include<stdio.h>
int main(){
    int a=11;
    int *ptr;
    ptr=&a;//Address of "a" copied in to pointer variable ptr
    printf("\n value of a %d",a);
    printf("\n Address of a %d",&a);
    printf("\n value of pointers variables ptr %d",*ptr);
    printf("\n address of pointer ptr %u",&ptr);

    return 0;
}*/
/*
#include<stdio.h>
int main(){
    int a=20;
    int *ptr;
    ptr=&a;//Address of "a" copied in to pointer variable ptr
    printf("\n Value of a %d",a);
    printf("\n Address of a %d",&a);//
    printf("\n Value of Pointers variables ptr %d",*ptr);
    printf("\n Address of Pointer ptr %u",ptr);
    printf("\n Address of Pointer ptr+1 %u",ptr+1);
    printf("\n Address of Pointer ptr+2 %u",ptr+2);
    printf("\n Address of Pointer ptr-1 %u",ptr-1);
    printf("\n Address of Pointer ptr=2 %u",ptr-2);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    float b=-127.25;
    float *ptr;
    ptr=&b;
    printf("\n Address of Pointer ptr %u",ptr);
    printf("\n Address of Pointer ptr+1 %u",ptr+1);
    printf("\n Address of Pointer ptr+2 %u",ptr+2);
    printf("\n Address of Pointer ptr-1 %u",ptr-1);
    printf("\n Address of Pointer ptr=2 %u \n",ptr-2);
    printf("%d",sizeof(b));
    return 0;
}
*/
/*
#include<stdio.h>
int main (){
    int a=20,*ptr1;
    ptr1=&a;
    int b=40,*ptr2;
    ptr2=&b;
    printf("\n ptr 1 %d ",ptr1);
    printf("\n ptr 2 %d ",ptr2);
    printf("\n ptr1-ptr2 %d ",ptr1-ptr2);
    printf("\n ptr2-ptr1 %d ",ptr2-ptr1);
    return 0;

}*/
#include<stdio.h>
int main(){
    int var1=30,*ptr;
    ptr=&var1;
    printf("PTR %d\n",ptr);
    printf("*PTR %d",*ptr);

}