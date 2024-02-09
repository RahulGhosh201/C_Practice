#include <stdio.h>
#include <limits.h>

int soln(int arr[][5], int r, int c)
{
    int maxi = INT_MIN, ans = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int cnt = 0;
            if (arr[i][j] == 1)
            {
                cnt++;
            }
            if (cnt > maxi)
            {
                maxi = cnt;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int cnt = 0;
            if (arr[i][j] == 1)
            {
                cnt++;
            }
            if (cnt == maxi)
            {
                return i;
            }
        }
    }
}

int main()
{
    int r = 5, c = 5;
    int arr[5][5] = {{0, 1, 0, 1, 1},
                     {1, 1, 1, 1, 1},
                     {1, 0, 0, 1, 0},
                     {0, 0, 0, 0, 0},
                     {1, 0, 0, 0, 1}};
    printf("Ans: %d", soln(arr, r, c));
    return 0;
}