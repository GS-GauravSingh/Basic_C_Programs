#include <stdio.h>

int main()
{
    /*~~~~~~~~~~~~~Matrix A input~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    int rowA, columnA;
    int rowB, columnB, sum = 0;

    printf("\t\tMatrix Multiplication\n\t\t---------------------\nEnter a no. of Rows and Columns for matrix A\nEnter no. of Rows:\n");
    scanf("%d", &rowA);
    printf("Enter no. of Columns:\n");
    scanf("%d", &columnA);
    int matrixA[rowA][columnA];

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            printf("Enter the Value at %d %d\n", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    /*~~~~~~~~~~~~~Matrix B input~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    printf("Enter a no. of Rows and Columns for matrix B\nEnter no. of Rows:\n");
    scanf("%d", &rowB);
    printf("Enter no. of Columns:\n");
    scanf("%d", &columnB);
    int matrixB[rowB][columnB];
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("Enter the Value at %d %d\n", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    /*~~~~~~~~~~~~~~~~~~~ Resultant Matrix ~~~~~~~~~~~~~~~~~~~~~*/
    int result[rowA][columnB];

    if (columnA != rowB)
    {
        printf("Matrix Multiplication not possible bacause no. of column in matrix A is not equal to no. of rows in matrix B\n %d != %d\n", columnA, rowB);
    }
    else
    {
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                for (int k = 0; k < columnA; k++)
                {
                    sum += matrixA[i][k] * matrixB[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
    }
    printf("\nResultant Matrix will be:\n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}