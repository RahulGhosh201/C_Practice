#include <stdio.h>

void soln(int arr[][4], int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[j][i]);
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

    printf("Elements of the transpose matrix are: \n");
    soln(arr, r, c);
}