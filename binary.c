#include<stdio.h>

int main()
{
    int size,lower,upper,key,middle,flag=0,temp; //size stores size of array, lower stores lower bound of array, upper stores upper bound
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<size; i++) //this section of the program sorts the array using bubble sort technique
    {
        for(int j = 0; j<(size-1-i); j++) //this section of the program sorts the array using bubble sort technique
        {
            if(arr[j]>arr[j+1]) //this section of the program sorts the array using bubble sort technique
            {
                temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            }
        }
    }
    printf("Sorted array: ");
     for(int i = 0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element to search for:\n");
    scanf("%d",&key);
    lower = 0;
    upper = size;
    while(lower<=upper) //this section of the program performs binary search operation
    {
        middle = (lower+upper)/2; //finding middle index of the array
        if(key<arr[middle]) //condition to check if element to be found is in left half of the array
            upper = middle-1;
        else if(key>arr[middle]) //condition to check if element to be found is in the right half of the array
            lower = middle+1;
        else if(key==arr[middle]) //condition to check if the element has been found
        {
            printf("Element found at position %d in the array",middle+1);
            flag=1;
            break;
        }
    }
    if(flag==0) //condition to check if the element is present in the array or not
        printf("Element not found in the array");
    return 0;
}