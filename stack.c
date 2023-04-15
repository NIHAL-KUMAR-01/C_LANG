#include <stdio.h>
#include <stdlib.h>
int top = -1;
int size = 5;
int main()
{
    int stack[size], choice, data;
    while (top + 1 <= size)
    {

        printf("\n1:Push\n2:Pop\n3:Traverse\n0:Exit\nEnter choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (top == size - 1)
            {
                printf("Cannot Push Value,Stack is Full.");
            }
            else
            {
                printf("Enter Value: ");
                scanf("%d", &data);
                stack[top + 1] = data;
                top++;
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Stack is Empty, Element cannot be Deleted");
            }
            else
            {
                int x = stack[top];
                printf("Element Deleted :%d", x);
                top = top - 1;
            }
            break;
        case 3:
            for (int i = 0; i <= top; i++)
            {
                printf("%d\t", stack[i]);
            }
            break;
        case 0:
            break;
        default:
            printf("Enter Correct Option");
        }
    }
    return 0;
}