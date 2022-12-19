#include<stdio.h>

int main()
{
    int a,b,m,n;
    printf("Enter the rows and columns for the matrices: ");
    printf("\n");
    scanf("%d %d", &a, &b);
    int matrix1[a][b];
    int matrix2[a][b];
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("Enter an element for matrix 1: ");
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("Enter an element for matrix 2: ");
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Matrix 1: ");
    printf("\n");
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2: ");
    printf("\n");
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            matrix1[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The sum of the matrices is: ");
    printf("\n");
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}