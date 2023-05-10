//1. WAP to Store Information of 3 students and Display it Using Structure.
#include<stdio.h>
struct student
{
    char name[100];
    char regno[100];
    char branch[100];
    int semester;
};

int main(){
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Student's Name: ");
        scanf("%s",& s[i].name);
        printf("Enter Registration no: ");
        scanf("%s",& s[i].regno);
        printf("Enter Branch: ");
        scanf("%s",& s[i].branch);
        printf("Semester: ");
        scanf("%d",& s[i].semester);
    }
    printf("\nDISPLAYING DATA\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nName of student: %s\nRegistration no %s\nBranch %s \nSemester %d\n      ****",s[i].name,s[i].regno,s[i].branch,s[i].semester);
    }
    

    return 0;
}