#include <stdio.h>

int main()
{
    int max = 5;
    int pushval, popval;
    int stack[max], top = -1;
    int element;
    int choice = 1;
    while (choice == 1 || choice == 2 || choice == 3 || choice == 4)
    {
        printf("**Stack menu**\n");
        printf("Press 1 for push operation\n");
        printf("Press 2 for pop operation\n");
        printf("Press 3 for peek operation\n");
        printf("Press 4 to exit program\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        if (choice == 1)
        {
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
            }
        }
        else if (choice == 2)
        {
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                popval = stack[top];
                top--;
                printf("Popped element is: %d", popval);
            }
        }
        else if (choice == 3)
        {
            if (top == -1)
            {
                printf("Stack is empty, no elements to peek\n");
            }
            else
            {
                printf("Element at the top is: %d", stack[top]);
            }
        }
        else if (choice == 4)
        {
            printf("Final elements in the stack are:\n");
            for (int i = 0; i < top; i++)
            {
                printf("%d\n", stack[i]);
            }
            break;
        }
    }
}