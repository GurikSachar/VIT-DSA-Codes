#include<stdio.h>

int main()
{
    int size,key,flag=0,pos;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(int i = 0; i<size; i++)
        scanf("%d",&arr[i]);
    printf("Enter an element you want to search for:\n");
    scanf("%d",&key);
    for(int i = 0; i<size; i++) 
    {
        if(key==arr[i]) //Comparing the element to be searched for with each element of the array
        {
            flag = 1;
            pos = i+1;
        }
    }
    if(flag==1)
        printf("Element found at position %d",pos);
    else
        printf("Element not found");
    return 0;
}