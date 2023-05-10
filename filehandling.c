#include <stdio.h>

int main(){

    FILE * file;

    int sum = 0;

    file = fopen("08-05-2023.txt", "w"); // Open in writing mode.

    fprintf(file, "%s %d\n", "anpiti_Kumar", 20);
    fprintf(file, "%s %d\n", "Raghav_Goel", 19);

    fclose(file); // Closing the file

    file = fopen("08-05-2023.txt", "r"); // Open in read mode

    int age;
    char name[100];

    char line[1000];

    while (fgets(line, 1000, file))
    {
        sscanf(line, "%s %d", &name, &age);
        sum += age;
    }

    fclose(file); // Closing the file
    
    printf("\n\nSum of age : %d", sum);
    return 0;
}