#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int case_solver(int num1);
int main()
{
    // int virtual_otp; // otp generation through library ---- -- > time.h
    // srand(time(0));
    // virtual_otp = rand() % 10000;
    // // generates otp 
    // from 0 to 10000 printf("%d is your otp \n", virtual_otp);
    // printf("Please enter the otp\n");
    // int real_otp;
    // scanf("%d", &real_otp);
    int virtual_otp=2536;
    int real_otp=2536;
    if (virtual_otp == real_otp)
    {
        int from, to;
        printf("------------------------------WELCOME-----------------------------------\n");
        printf("------------------------------------------------------------------------\n");
        printf("-------------------Enter your travelling details------------------------\n");
        printf("------------------------------------------------------------------------\n");
        // printf("Please enter your details of your trip\n");
        printf("\tEnter your boarding destination \n");
        char str1[30];
        scanf("%s", &str1);
        printf("\tEnter your destination\n");
        char str2[30];
        scanf("%s", &str2);
        printf("\tYour destination is FROM: %s---> TO: %s\n", str1, str2);
        char date[20];
        printf("\tPlease enter departure date in this format date/month/year\n");
        scanf("%s", &date);
        printf("\tYou selected %s for departure \n", date);
        printf("\tSelect your timming\n");
        int time_zone;
        printf("*****************\n");
        printf("\tFor train in morning ---->press 1\t\n");
        printf("\tFor train in noon ------->press 2\t\n");
        printf("\tFor train in evening ---->press 3\t\n");
        printf("\tFor train in night ------>press 4\t\n");
        printf("*****************\n");
        printf("\n");
        scanf("%d", &time_zone);
        switch (time_zone)
        {
            int num1, num2, num3, num4;
        case 1:
            printf("------------------------------------------------------------------------\n");
            printf("-----------TRAIN NAME--------------TIME-------------TRAIN NUMBER--------\n");
            printf("1) GARIB RATH Train 6:05AM 20343\n");
            printf("2) RAJDHANI EXPRESS Train 7:05AM 18035\n");
            printf("------------------------------------------------------------------------\n");
            printf("<Press 1> for GARIB RATH Train \n<Press 2> for RAJDHANI EXPRESS Train \n");

            scanf("%d", &num1);
            case_solver(num1);
            break;
        case 2:

            printf("------------------------------------------------------------------------\n");
            printf("-----------TRAIN NAME--------------TIME-------------TRAIN NUMBER--------\n");
            printf("1) GARIB RATH Train 6:05AM 20343\n");
            // printf("2) RAJDHANI EXPRESS Train 7:05AM 18035\n");
            printf("------------------------------------------------------------------------\n");
            printf("<Press 1> for GARIB RATH Train \n");
            scanf("%d", &num2);
            case_solver(num2);
            break;
        case 3:

            printf("------------------------------------------------------------------------\n");
            printf("-----------TRAIN NAME--------------TIME-------------TRAIN NUMBER--------\n");
            printf("1) GARIB RATH Train 6:45PM 20343\n");
            printf("2) RAJDHANI EXPRESS Train 7:15PM 18035\n");
            printf("3) TEZ EXPRESS Train 8:05PM 33212\n");
            printf("------------------------------------------------------------------------\n");
            printf("<Press 1> for GARIB RATH Train \n<Press 2> for RAJDHANI EXPRESS Train \n <Press 3> for TEZ EXPRESS Train \n");
            scanf("%d", &num3);
            case_solver(num3);
            break;
        case 4:
            printf("------------------------------------------------------------------------\n");
            printf("-----------TRAIN NAME--------------TIME-------------TRAIN NUMBER--------\n");
            printf("1) GARIB RATH Train 8:45PM 20343\n");
            printf("2) RAJDHANI EXPRESS Train 9:35PM 18035\n");
            printf("3) TEZ EXPRESS Train 10:15PM 33212\n");
            printf("4) AAJADI EXPRESS Train 11:25PM 08414\n");
            printf("------------------------------------------------------------------------\n");
            printf("<Press 1> for GARIB RATH Train \n<Press 2> for RAJDHANI EXPRESS Train \n <Press 3> for TEZ EXPRESS Train \n <Press 4> for AAJADI EXPRESS Train \n");
            scanf("%d", &num3);
            case_solver(num3);
            break;
        default:
            printf("ERROR INVALID INPUT");
            break;
        }
    }
    else
    {
        printf("You have entered wrong OTP\n");
    }
    return EXIT_SUCCESS;
}
int case_solver(int num1)
{
    switch (num1)
    {
        int passen, booked;
    case 1:
        printf("\t\tYou have chosen GARIB RATH Train \n \t\tEnter number of passengers \n ");
        scanf("%d", &passen);
        printf("\t\tEnter the initial names of the passengers\n");
        for (int i = 0; i < passen; i++)
        {
            char str[30];
            scanf("%s", str); // random seat generator
            srand(time(0));
            booked = rand() % 100;
            printf("\t\t %s has reserved %d number seat\n", str, booked);
        }
        printf("\t\tThank you for choosing our services!!");
        break;
    case 2:
        printf("\t\tYou have chosen RAJDHANI EXPRESS Train \n \t\tEnter number of passengers \n ");
        // printf("You have chosen RAJDHANI EXPRESS \n Enter number of passengers \n ");
        scanf("%d", &passen);
        printf("\t\tEnter the initial names of the passengers\n");
        for (int i = 0; i < passen; i++)
        {
            char names[30];
            scanf("%s", names); // random seat generator
            srand(time(0));
            booked = rand() % 100;
            printf("\t\t %s reserved %d number seat \n",
                   names, booked);
        }
        printf("\t\tThank you for choosing our services!!");
        break;
    case 3:
        printf("\t\tYou have chosen RAJDHANI EXPRESS Train \n \t\tEnter number of passengers \n ");
        // printf("You have chosen TEZ EXPRESS \n Enter number of passengers \n ");
        scanf("%d", &passen);
        printf("\t\tEnter the initial names of the passengers\n");
        for (int i = 0; i < passen; i++)
        {
            char names[30];
            scanf("%s", names); // random seat generator
            srand(time(0));
            booked = rand() % 100;
            printf("\t\t %s reserved %d number seat\n",
                   names, booked);
        }
        printf("\t\tThank you for choosing our services!!");
        break;
    case 4:
        printf("\t\tYou have chosen RAJDHANI EXPRESS Train \n \t\tEnter number of passengers \n ");
        // printf("You have chosen AAJADI EXPRESS \n Enter number of passengers \n ");
        scanf("%d", &passen);
        printf("\t\tEnter the initial names of the passengers\n");
        for (int i = 0; i < passen; i++)
        {
            char names[30];
            scanf("%s", names); // random seat generator
            srand(time(0));
            booked = rand() % 100;
            printf("\t\t %s reserved %d number seat \n",
                   names, booked);
        }
 printf("\t\tThank you for choosing our services!!");
 break;
 default:
 printf("Please choose a valid train\n");
 int num5;
 scanf("%d", &num5);
 return (case_solver(num5));
    }
}