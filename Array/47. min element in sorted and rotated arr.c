#include <stdio.h>
#include <limits.h>

void soln(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Ans: %d", min);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}