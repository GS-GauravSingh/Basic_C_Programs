#include <stdio.h>
void starpattern(int rows);
void reverse_starpattern(int rows);
int main()
{
    int input, rows;
    printf("Type:\n0 to print triangular start pattern.\n1 to print reverse triangular pattern\n");
    scanf("%d", &input);
    printf("Enter number of rows\n");
    scanf("%d", &rows);
    switch (input)
    {
    case 0:
        starpattern(rows);
        break;
    case 1:
        reverse_starpattern(rows);
        break;

    default:
        printf("Please enter a valid number");
        break;
    }
    return 0;
}

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reverse_starpattern(int rows)
{
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
