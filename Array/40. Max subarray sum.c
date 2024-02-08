#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int kadane(int arr[], int n)
{
    int maxEndingHere = arr[0], maxSoFar = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    return maxSoFar;
}

int soln(int arr[], int n)
{
    int maxStraightSum = kadane(arr, n);
    int totalSum = 0, minEndingHere = arr[0], minSoFar = arr[0];
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        minEndingHere = min(arr[i], minEndingHere + arr[i]);
        minSoFar = min(minSoFar, minEndingHere);
    }
    int ans = totalSum - minSoFar;
    if (ans == 0)
    {
        return maxStraightSum;
    }
    return max(maxStraightSum, ans);
}

int main()
{
    int arr[] = {10, 8, -20, 5, -3 - 5, 10, -13, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n));
    return 0;
}