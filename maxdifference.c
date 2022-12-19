#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        printf("Enter an element: ");
        scanf("%d",&arr[i]);
    }
    int element1,element2,pos1,pos2;
    int diff = 0;
    for(int i = 0; i<n; i++)
    {
        int temp1 = arr[i];
        for(int j = 0; j<n; j++)
        {
            int temp2 = arr[j];
            if(element1>element2)
            {
                if((temp1-temp2)>diff)
                {
                    diff = temp1 - temp2;
                    element1 = temp1;
                    element2 = temp2;
                    pos1 = i;
                    pos2 = j;
                }
            }
        }
    }
    printf("Array is: ");
    printf("\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Max difference is: %d", diff);
    printf("\nThe elements whose difference is max is: %d and %d", element1, element2);
    printf("\nTheir positions in the array are %d and %d respectively", pos1+1, pos2+1);
    return 0;
}