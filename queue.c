#include <stdio.h>

int main()
{
    int front = -1, rear = -1, element;
    int queue[20];
    int option;
    do
    {
        printf("\n**Queue Program**");
        printf("\nEnter the opertion which you want to perform:");
        printf("\n1. Enqueue()");
        printf("\n2. Dequeue()");
        printf("\n3. Peek()");
        printf("\n4. Display()");
        printf("\n5. Clear screen");
        printf("\n6. Exit program\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1: //Enqueue operation
            if (rear == sizeof(queue) - 1)
                printf("\nQueue is full");
            else
            {
                printf("\nEnqueue operation");
                printf("\nEnter the element you want to add to the queue: ");
                scanf("%d", &element);
                if (front == -1 && rear == -1)
                {
                    front++;
                    rear++;
                    queue[rear] = element;
                    printf("\nFirst element has been added to the queue");
                }
                else
                {
                    rear++;
                    queue[rear] = element;
                    printf("\nElement has been added to the queue");
                }
            }
            break;
        case 2: //Dequeue operation
            printf("\nDequeue operation");
            if (front == -1 && rear == -1 || front > rear)
                printf("\nThe queue is empty");
            else
            {
                int data = queue[front];
                front++;
                printf("\nData at front: %d has been removed from queue", data);
            }
            break;
        case 3: //peek operation
            printf("\nPeek operation");
            if(front>rear)
            {
                printf("\nThe queue is empty");
            }
            else
            {
                printf("\nElement at the front of the queue is: %d", queue[front]);
            }
            break;
        case 4: //display operation
            printf("\nDisplay operation");
            if(front>rear)
            {
                printf("\nThe queue is empty");
            }
            else
            {
                printf("\nElements in the queue are: ");
                for (int i = front; i <= rear; i++)
                printf("%d ", queue[i]);
            }
            break;
        case 5: //to clear the screen
            system("cls");
        case 6: //to exit the program
            break;
        default: 
            printf("\nEnter proper option number");
            break;
        }
    } while (option != 6);
    return 0;
}