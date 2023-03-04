#include<stdio.h>
void main()
{
    int stack[20],i = 0; //arbitrarily assuming stack to be of size , i is a position/loop variable
    int length; //to store the length of the string
    int top = -1; //stack is currently empty
    printf("Enter size of string to be reversed using stack:\n");
    scanf("%d",&length);
    char string[length];
    printf("Enter the string to be reveresed:\n");
    scanf("%s",&string);
    while(top<20&&i<length) //20 is the top of the stack 
    {
        top++;                  //pushing characters of string into the stack
        stack[top] = string[i];
        i++;
    }
    i = 0; //resetting the position variable
    while(top>-1&&i<length) //-1 is the bottom of the stack
    {
        string[i] = stack[top]; //popping characters from stack into the string
        top--;
        i++;
    }
    printf("Reversed string:\n");
    for(i = 0; i<length; i++) //printing the reversed string
        printf("%c",string[i]);
}