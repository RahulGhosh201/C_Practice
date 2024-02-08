#include <stdio.h>

void soln(int arr[][4], int r, int c)
{
    printf("Lower triangular: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i >= j)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    printf("Upper triangular: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i <= j)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int r = 0, c = 0;
    printf("Enter no of rows: ");
    scanf("%d", &r);
    printf("Enter no of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter elements in the matrix: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    soln(arr, r, c);
}