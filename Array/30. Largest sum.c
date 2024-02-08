#include <stdio.h>

int maxSubArraySum(int arr[], int size)
{
    int temp = arr[0], ans = arr[0];
    for (int i = 1; i < size; i++)
    {
        temp = (arr[i] > temp + arr[i]) ? arr[i] : temp + arr[i];
        ans = (temp > ans) ? temp : ans;
    }
    return ans;
}

int main()
{
    int arr[] = {8, 3, 8, -5, 4, 3, -4, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int maxSum = maxSubArraySum(arr, size);

    printf("\nThe largest sum of contiguous subarray is : %d\n", maxSum);

    return 0;
}
