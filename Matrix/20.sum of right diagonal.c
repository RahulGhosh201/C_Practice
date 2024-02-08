#include <stdio.h>

void soln(int arr[][4], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("Sum: %d\n", sum);
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
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// 1+6+11+16=34