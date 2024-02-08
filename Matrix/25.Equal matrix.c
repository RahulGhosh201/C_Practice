#include <stdio.h>

void soln(int arr1[][2], int arr2[][2], int r1, int c1, int r2, int c2)
{
    if (r1 != r2 || c1 != c2)
    {
        printf("Not equal\n");
    }
    int flag = 1;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                flag++;
            }
        }
    }
    if (flag == 1)
    {
        printf("Equal matrix\n");
    }
    else
    {
        printf("Not equal matrix\n");
    }
}

int main()
{
    int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
    printf("Enter no of rows in arr1: ");
    scanf("%d", &r1);
    printf("Enter no of columns in arr1: ");
    scanf("%d", &c1);
    int arr1[r1][c1];
    printf("Enter elements in the matrix arr1:  ");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter no of rows in arr1: ");
    scanf("%d", &r2);
    printf("Enter no of columns in arr1: ");
    scanf("%d", &c2);
    int arr2[r2][c2];
    printf("Enter elements in the matrix arr1:  ");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    soln(arr1, arr2, r1, c1, r2, c2);
}