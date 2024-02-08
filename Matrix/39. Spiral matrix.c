#include <stdio.h>
#define row 4
#define col 5
void soln(int rowEnd, int colEnd, int matrix[row][col])
{
    int rowInd = 0, colInd = 0, i;
    while (rowInd < rowEnd && colInd < colEnd)
    {
        for (i = colInd; i < colEnd; i++) // 1st row in 1st interation
        {
            printf("%d ", matrix[rowInd][i]);
        }
        rowInd++;

        for (i = rowInd; i < rowEnd; i++) // last column in 1st iteration
        {
            printf("%d ", matrix[i][colEnd - 1]);
        }
        colEnd--;

        if (rowInd < rowEnd)
        {
            for (i = colEnd - 1; i >= colInd; i--) // last row in 1st iteration
            {
                printf("%d ", matrix[colEnd - 1][i]);
            }
            rowEnd--;
        }

        if (colInd < colEnd)
        {
            for (i = rowEnd - 1; i >= rowInd; i--) // 1st column in 1st iteration
            {
                printf("%d ", matrix[i][colInd]);
            }
            colInd++;
        }
    }
}

int main()
{
    int matrix[row][col];
    printf("Enter elements of the matrix: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    soln(row, col, matrix);
    return 0;
}