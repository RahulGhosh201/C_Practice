#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void soln(int arr[], int n)
{
    if (n < 2)
    {
        printf("The array is too small \n");
        return;
    }
    int minSum = INT_MAX, minLeft, minRight;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(minSum))
            {
                minSum = sum;
                minLeft = i;
                minRight = j;
            }
        }
    }
    printf("The pair of elements whoose sum is minimum are: %d %d", arr[minLeft], arr[minRight]);
}

int main()
{
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}