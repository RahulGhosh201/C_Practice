#include <stdio.h>

int soln(int arr[][3], int n)
{
    int temp[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                temp[k++] = arr[i][j];
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += temp[i];
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