#include <stdio.h>

void soln(int arr[][2], int r, int c)
{
    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i == j && arr[i][j] == 0) || (i != j && arr[i][j] != 0))
            {
                flag++;
            }
        }
    }
    if (flag == 1)
    {
        printf("It's an identity matrix\n");
    }
    else
    {
        printf("It's not an identity matrix\n");
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