#include <stdio.h>

void soln(int arr[], int n)
{
    int cnt[n], hashSet[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }
    printf("Ans: ");

    for (int i = 0; i < n; i++)
    {
        if (cnt[arr[i]] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {6, 7, 3, 6, 8, 7, 6, 8, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
}