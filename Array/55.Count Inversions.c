#include <stdio.h>

int soln(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 9, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n));
}