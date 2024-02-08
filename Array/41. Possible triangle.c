#include <stdio.h>

int compare(const void *one, const void *two)
{
    return *(int *)one > *(int *)two;
}

void soln(int arr[], int n)
{
    qsort(arr, n, sizeof(int), compare);
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] >= arr[k])
                {
                    ans++;
                }
            }
        }
    }
    printf("Ans: %d", ans);
}

int main()
{
    int arr[] = {6, 18, 9, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}