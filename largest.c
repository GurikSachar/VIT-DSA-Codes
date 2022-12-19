#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in array ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for(int j = 0; j<n; j++)
    {
        for(int k = 0; k<n; k++)
        {
            if(arr[k]>largest)
                largest = arr[k];
        }   
    }
    printf("Array is: ");
    printf("\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Largest element in the array is: %d",largest);
    return 0;
}