#include <stdio.h>

void soln(int arr[], int n)
{
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    printf("Ans: ");
    for (int i = 0; i < n; i++)
    {
        totalSum -= arr[i];
        if (totalSum == leftSum)
        {
            printf("%d ", i);
        }
        leftSum += arr[i];
    }
}

int main()
{
    int arr[] = {0, -4, 7, -4, -2, 6, -3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
}