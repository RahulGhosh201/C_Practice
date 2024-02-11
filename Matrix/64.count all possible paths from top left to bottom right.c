#include <stdio.h>

int soln(int m, int n)
{
    int arr[m][n];

    // first we should initialize the first row with 1
    for (int j = 0; j < n; j++)
    {
        arr[0][j] = 1;
    }

    // then initialize the first column with 1
    for (int i = 0; i < m; i++)
    {
        arr[i][0] = 1;
    }

    // now operating with the rest of the column and rows, so the iteration is 1 to n-1
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; // no of paths= paths from left position of the matrix + paths from top position of that position
        }
    }
    return arr[m - 1][n - 1];
}

int main()
{
    int row = 4, column = 4;
    printf("Ans: %d", soln(row, column));
}