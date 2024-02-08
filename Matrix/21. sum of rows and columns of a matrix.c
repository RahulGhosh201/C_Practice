#include <stdio.h>

void soln(int arr[][4], int r, int c)
{

    printf("Row Sum: ");
    for (int i = 0; i < r; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < c; j++)
        {
            rowsum += arr[i][j];
        }
        printf("%d ", rowsum);
    }

    printf("\nColumn sun: ");
    for (int i = 0; i < r; i++)
    {
        int colsum = 0;
        for (int j = 0; j < c; j++)
        {
            colsum += arr[j][i];
        }
        printf("%d ", colsum);
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
// 1 2 3 4      10
// 5 6 7 8      26
// 9 10 11 12   42
// 13 14 15 16  58
//
// 28 32 36 40