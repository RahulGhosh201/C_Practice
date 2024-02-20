#include <stdio.h>
#include <limits.h>

int soln(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = j - i;
            if (arr[j] > arr[i] && diff > maxi)
            {
                maxi = diff;
            }
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {7, 5, 8, 2, 3, 2, 4, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n));
}
