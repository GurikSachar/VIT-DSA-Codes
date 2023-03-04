#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++) //Accepting elements into the array
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    int largest = arr[0]; //Assuming first element of array to be the largest variale
    for(int k = 0; k<n; k++) //Comparing each element of array with assumed largest element
    {
        if(arr[k]>largest)
        largest = arr[k];
    }   
    printf("Array is: "); 
    printf("\n");
    for(int i = 0; i<n; i++) //printing the array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Largest element in the array is: %d",largest); //printing the largest element in the array
    return 0;
}