#include <stdio.h>

int soln(int arr[][3], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                ans += arr[i][j];
            }
        }
    }
    return ans;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    printf("Ans: %d", soln(arr, 3));
}