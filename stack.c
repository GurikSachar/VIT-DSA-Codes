#include <stdio.h>

void main()
{
    int max = 5;
    int pushval, popval; // pushval and popval store the values which have to be pushed and those which have been popped respectively
    int stack[max], top = -1;
    int element;
    int choice = 1;
    do
    {
        printf("**Stack menu**\n");
        printf("Press 0 to exit program\n");
        printf("Press 1 for push operation\n");
        printf("Press 2 for pop operation\n");
        printf("Press 3 for peek operation\n");
        printf("Press 4 for display elements\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            break;
        case 1: // push operation
            if (top == max - 1)
            {
                printf("Stack is full\n");
            }
            else
            {
                printf("Enter the value to be pushed: ");
                scanf("%d", &pushval);
                top++;
                stack[top] = pushval;
                printf("Value has been pushed onto stack\n");
            }
            break;
        case 2: // pop operation
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                popval = stack[top];
                top--;
                printf("Popped element is: %d\n", popval);
            }
            break;
        case 3: // peek operation
            if (top == -1)
            {
                printf("Stack is empty, no elements to peek\n");
            }
            else
            {
                printf("Element at the top is: %d\n", stack[top]);
            }
            break;
        case 4: // display operation
            printf("Elements in the stack are:\n");
            for (int i = top; i >= 0; i--)
            {
                printf("%d\n", stack[i]);
            }
            break;
        default:
            printf("Invalid option, enter again\n");
            break;
        }
    } while (choice != 0);
}