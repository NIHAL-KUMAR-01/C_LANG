#include <stdio.h>
/*
void graceandshow(struct student *s)
{
    for (int i = 0; i < 5; i++)
    {
        if (s[i].marks < 40.0)
        {
            s[i].marks = s[i].marks + 5;
        }
    }
}
*/
struct student
{
    char name[50];
    int roll;
    float marks;
} s[5];

int main()
{
    struct student s[5];
    printf("=====================================\n");
    printf(" Enter Information of students \n\n\n");
    printf("=====================================\n");
    // STORING INFORMATION
    for (int i = 0; i < 5; i++)
    {
        s[i].roll = i + 1;
        printf("Enter Name of student ");
        scanf("%s", &s[i].name);
        printf("Enter marks ");
        scanf("%f", &s[i].marks);
    }

    printf("Showing all data \n");
    for (int i = 0; i < 5; i++)
    {
        printf("The Roll no %d\n\nName of Student %s\n\nMarks obtained %f\n\n",s[i].roll,s[i].name,s[i].marks);
    }
    
    return 0;
}