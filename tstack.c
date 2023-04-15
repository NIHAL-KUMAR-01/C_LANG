// Implementing Static Stack using an Array in C
#include <stdio.h>
#include <stdlib.h>
// size will be the capacity of the Static Stack
#define size 5
// Initializing the top of the stack to be -1
int top = -1;
// Initializing the stack using an array
int stack[size];
int main()
{
    int choice, ele;
    while (1)
    {
        printf("\nChoose any of the following options:\n");
        printf("1: Push\n 2: Pop\n 3: Display \n 0: exit");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
        {
            if (top == size - 1)
                printf("can't add more elements into the stack\n");
            else
            {
                printf("\n Enter Element");
                scanf("%d", &ele);

                top += 1;
                stack[top] = ele; // store element at top
            }
        }
        break; // end of case 1

        case 2:
        {
            // Checking underflow state
            if (top == -1)
                printf("Stack already empty, can't remove any element\n");
            else
            {
                int x = stack[top];
                printf("Popping %d out of the stack\n", x);
                top = top - 1;
            }
        }
        break;  // end of case 2
        case 3: // traversal(); break;
        {
            printf("\n\n");
            for (int i = 0; i <= top; i++)
            {
                printf("\t %d", stack[i]);
            }
        }
        break; // end of case 3
        case 0:
            exit(0);
        default:
            printf("Please choose a correct option!");
        } // end of switch
    }     // end of while loop
} // end of main
