#include<stdio.h>
int main(){
    //                                                          FIRST IF ELSE CONDITION
   /* int age;
    printf("ENTER AGE OF USER:-");
    scanf("%d",& age);
    if(age >=18){
        printf(" Your entered age is %d and adult\n",age );
        printf("\tuser can vote]\n");
        printf("\tuser cann't apply for driving licence");
    }
    else{
        printf("Your entered age is %d and not adult\n ",age);
        printf("\tuser cannot vote\n");
        printf("\tuser can apply for driving licence\n");

    }
    printf("THANK YOU");*/

    //                                                            IF AND ELSE IF STATEMENT
    /*int marks ;
    printf("Enter marks out of 100:-");
    scanf("%d",& marks);
    if(marks>=60 && marks<=70){
        printf("STUDENTS HAVING %d marks secured _D_ Grade ",marks);
    }
    else if (marks>70 && marks <=80){
        printf("STUDENTS HAVING %d marks secured _C_ Grade ",marks);
    }
    else if (marks>80 && marks <=90){
        printf("STUDENTS HAVING %d marks secured _B_ Grade ",marks);
    }
    else if (marks>90 && marks <=100){
        printf("STUDENTS HAVING %d marks secured _A_ Grade ",marks);
    }*/
    //                                                    TERNARY OPERATOR (TO SHORT THE CODE)
    int age;
    printf("Enter age :-");
    scanf("%d",&age);
    (age >=18)  ? printf("ADULT ") : printf("not adult");
    

    
    return 0;

}