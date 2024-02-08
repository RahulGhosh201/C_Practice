#include <stdio.h>

int soln(int arr[][4], int r)
{
    int ans = 0;
    for (int i = 0; i < r; i++)
    {
        int cofactor = (i % 2 == 0 ? 1 : -1) * arr[0][i] * soln(arr, r - 1);
        ans += cofactor;
    }
    return ans;
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

    int ans = soln(arr, r);
    printf("Ans: %d\n", ans);
}