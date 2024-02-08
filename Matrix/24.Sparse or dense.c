#include <stdio.h>

void soln(int arr[][4], int r, int c)
{
    int sparse = 0, dense = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                sparse++;
            }
            else
            {
                dense++;
            }
        }
    }
    if (sparse >= dense)
    {
        printf("It's a sparse matrix\n");
    }
    else
    {
        printf("It's a dense matrix\n");
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
    return 0;
}