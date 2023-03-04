#include<stdio.h>

int main()
{
    int a,b,m,n;
    printf("Enter the rows and columns for the matrices: ");
    printf("\n");
    scanf("%d %d", &a, &b); //accepting rows and columns for the two matrices
    int matrix1[a][b];
    int matrix2[a][b];
    for(int i = 0; i<a; i++) //accepting elements into matrix 1
    {
        for(int j = 0; j<b; j++)
        {
            printf("Enter an element for matrix 1: ");
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(int i = 0; i<a; i++) //accepting elements into matrix 2
    {
        for(int j = 0; j<b; j++)
        {
            printf("Enter an element for matrix 2: ");
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Matrix 1: "); //displaying matrix 1
    printf("\n");
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2: "); //displaying matrix 2
    printf("\n");
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i<a; i++) //claculating the sum of the matrices
    {
        for(int j = 0; j<b; j++)
        {
            matrix1[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The sum of the matrices is: ");
    printf("\n");
    for(int i = 0; i<a; i++) //displaying the sum of the matrices
    {
        for(int j = 0; j<b; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}