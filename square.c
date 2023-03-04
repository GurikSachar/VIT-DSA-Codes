#include<stdio.h>

int main()
{
    int n, square;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++) //accepting elements into the array
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    printf("Array is: ");
    printf("\n");
    for(int i = 0; i<n; i++) //displaying elements of the array
    {
        printf("%d ", arr[i]);
    }
    for(int i = 0; i<n; i++) //displaying the squares of each element of the array
    {
        square = arr[i]*arr[i];
        printf("\nSquare of element %d of array is: %d", i+1, square);
    }
    return 0;
}