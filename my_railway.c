#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum number of passengers in a single booking
#define MAX_PASSENGERS 5

// Structure to hold passenger details
typedef struct
{
    char name[50];
    int age;
    char gender;
    char from[20];
    char to[20];
} Passenger;

// Function to display available trains and their timings
void display_trains()
{
    printf("\nAvailable trains:\n");
    printf("==========================================================\n");
    printf("S.No  Train Name    Arrival_Time            Departure_Time\n");
    printf("==========================================================\n");
    printf("1. Shatabdi Express - 08:00......................13:20\n");
    printf("2. Rajdhani Express - 10:00......................18:35\n");
    printf("3. Duronto Express - 12:00......................17:36\n");
    printf("4. Purushottam Express - 11:05......................19:36\n");
    printf("5. Patna SF Express - 04:15......................12:25\n");
}

// Function to book a ticket
void book_ticket()
{
    FILE *fp;
    Passenger passengers[MAX_PASSENGERS];
    int num_passengers, coach_choice, i, j, train_number;
    int seat_choice;
    char train_name_array[5][1000]={"Shatabdi_Express-08:00", "Rajdhani_Express-10:00", "Duronto_Express-12:00","Purushottam_Express-11:05","Patna_SF_Express-04:15"};
    fp = fopen("passengers.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    printf("\nEnter your train choice : ");
    scanf("%d", &train_number);
    printf("\nEnter number of passengers: ");
    scanf("%d", &num_passengers);
    printf("\n");
    for (i = 0; i < num_passengers; i++)
    {
        printf("Passenger %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", passengers[i].name);
        printf("Enter age: ");
        scanf("%d", &passengers[i].age);
        printf("Enter gender (M/F): ");
        scanf(" %c", &passengers[i].gender);
        printf("Enter boarding station: ");
        scanf("%s", passengers[i].from);
        printf("Enter destination station: ");
        scanf("%s", passengers[i].to);
        printf("\n");
        fprintf(fp, "%s %d %c %s %s %s\n",passengers[i].name, passengers[i].age, passengers[i].gender, passengers[i].from, passengers[i].to, train_name_array[train_number-1]);
    }
    fclose(fp);
    printf("\nChoose coach type:\n1. AC\n2. Non-AC\n");
    scanf("%d", &coach_choice);
    printf("\nAvailable seats:\n");
    for (i = 1; i <= 60; i++)
    {
        if (i % 6 == 0)
        {
            printf("\n");
        }
        if (coach_choice == 1)
        {
            printf("%c%d ", 'A', i);
        }
        else
        {
            printf("%c%d ", 'B', i);
        }
    }
    printf("\n\nChoose seat: ");
    scanf("%s", &seat_choice);
    printf("\nTicket booked successfully!\n");
}

// Function to cancel a ticket
void cancel_ticket()
{
    FILE *fp1, *fp2;
    Passenger passengers;
    char name[50], from[20], to[20], line[1000];
    int age, flag = 0;
    fp1 = fopen("passengers.txt", "r");
    fp2 = fopen("temp.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    printf("\nEnter passenger name: ");
    scanf("%s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter boarding station: ");
    scanf("%s", &from);
    printf("Enter destination station: ");
    scanf("%s", &to);
    while (fgets(line, sizeof(line), fp1) != NULL)
    {
        sscanf(line, "%s %d %c %s %s", passengers.name, &passengers.age, &passengers.gender, passengers.from, passengers.to);
        if (strcmp(passengers.name, name) == 0 && passengers.age == age && strcmp(passengers.from, from) == 0 && strcmp(passengers.to, to) == 0)
        {
            flag = 1;
            printf("\nTicket cancelled successfully!\n");
        }
        else
        {
            fprintf(fp2, "%s", line);
        }
    }
    if (flag == 0)
    {
        printf("\nTicket not found.\n");
    }
    fclose(fp1);
    fclose(fp2);
    remove("passengers.txt");
    rename("temp.txt", "passengers.txt");
}

// Function to display passengers details

void display_passengers(){
    char* detailsPrefix[6] = {"Name","Age","Gender(M/F)","Boarding","Destination","Train Name"};
    FILE * fileobject = fopen("passengers.txt", "r");
    printf("\nPassengers Details:\n\n");
    char line[1000];
    char * linesData;
    int i = 0;

    while(fgets(line, 1000, fileobject)){
        linesData = strtok(line, " ");
        while(linesData != NULL){
            printf("%s :- %s\n", detailsPrefix[i], linesData);
            linesData = strtok(NULL, " ");
            i++;
        }
        i=0;
        printf("\n");
    }

    fclose(fileobject);
}

// Main function
int main()
{
    int choice;
    do
    {
        printf("=====================================================================================");
        printf("\n\n\t\t\tRailway Ticket Reservation System\n\n");
        printf("=====================================================================================\n\n");
        printf("1. Book ticket\n");
        printf("2. Cancel ticket\n");
        printf("3. Display passengers details\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display_trains();
            book_ticket();
            break;
        case 2:
            cancel_ticket();
            break;
        case 3:
            display_passengers();
            break;
        case 4:
            printf("\nExiting program...\n");
            break;
        default:
            printf("\nInvalid choice.\n");
        }
    } while (choice != 4);
}