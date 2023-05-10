/*
#include <stdio.h>
struct parent
{
    int a;
    int b;
    struct nested
    {
        int c;
        float d;
    } n1;
}p1;

int main()
{
    struct parent p1={10,30,{7,9.9}};
    printf("\n Parent structure variable a : %d",p1.a);
    printf("\n Parent structure variable b : %d",p1.b);
    printf("\n Nested structure variable c : %d",p1.n1.c);
    printf("\n Nested structure variable d : %f",p1.n1.d);

    return 0;
}
*/
#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    struct performance
    {
        float cgpa;
        int projectscore;
        char award[20];
    } p1;
} s1;
int main(){
    struct student s1={"Raghav",1,{8.9,20,"CSE_Crown"}};
    printf("\n====Displaying Data====\n");
    printf("The Name of student is %s\n",s1.name);
    printf("The Roll no of student is %d\n",s1.roll);
    printf("The CGPA of student is %.2f\n",s1.p1.cgpa);
    printf("The project score of student is %d\n",s1.p1.projectscore);
    printf("The Award given to  student is %s\n",s1.p1.award);



    return 0;

}