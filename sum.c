#include<stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++) //accepting elements into the array
    {
        printf("Enter an element: ");
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++) //adding each element in the array and storing it in a sum variable
    {
        sum += arr[i];
    }
    printf("Array is: ");
    printf("\n");
    for(int i = 0; i<n; i++) //printing thr array
    {
        printf("%d ", arr[i]);
    }
    printf("\nSum of the elements of the array is: %d", sum); //printing the sum of the elements
    return 0;
}