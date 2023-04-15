// #include <stdio.h>

// int main(){
//     printf("Enter attendance in per-cent : ");
//     int perCent;
//     scanf("%d", &perCent);
    
//     int possible;
//     possible = ("%d", perCent>75);

//     switch (possible)
//     {
//     case 0:
//         printf("Not eligible");
//         break;
//     case 1:
//         printf("Eligible");
//         break;
    
//     default:
//         break;
//     }
//     return 0;
// }
# include<stdio.h>
int main(){
    int score;
    printf("Enter your Score out of 100 : ");
    scanf("%d",& score);
    int marks;
    marks=score/10;
    switch(marks)
    {
        case 3:
        printf("Your score is %d and GRADE IS C-",score);
        break;
        case 4:
        printf("Your score is %d and GRADE IS C",score);
        break;
        case 5:
        printf("Your score is %d and GRADE IS B",score);
        break;
        case 6:
        printf("Your score is %d and GRADE IS B+",score);
        break;
        case 7:
        printf("Your score is %d and GRADE IS A",score);
        break;
        case 8:
        printf("Your score is %d and GRADE IS A+",score);
        break;
        case 9:
        printf("Your score is %d and GRADE IS A+",score);
        break;
        default:
        printf("FAILED IN EXAM or INVALID INPUT ");
        break;    
    }

}