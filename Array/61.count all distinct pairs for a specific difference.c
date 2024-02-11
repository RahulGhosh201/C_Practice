#include <stdio.h>
#include <stdlib.h>

int soln(int arr[], int n, int key)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if ((arr[j] - arr[i]) == key)
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {5, 2, 3, 7, 6, 4, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n, 5));
}