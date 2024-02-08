#include <stdio.h>

void soln(int arr1[][2], int arr2[][2], int r, int c)
{
    int sub[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", sub[i][j]);
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
    int arr1[r][c], arr2[r][c];
    printf("Enter elements in the arr1 matrix: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements in the arr2 matrix: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Elements of the sub matrix are: \n");
    soln(arr1, arr2, r, c);
}