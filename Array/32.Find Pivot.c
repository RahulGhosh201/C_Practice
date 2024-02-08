#include <stdio.h>

int soln(int arr[], int low, int high)
{
    if (arr[low] > arr[high])
    {
        return arr[low];
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            return arr[mid + 1];
        }
        if (arr[mid] < arr[mid + 1])
        {
            return arr[mid];
        }
        if (arr[mid] > arr[low])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {14, 23, 7, 9, 3, 6, 18, 22, 16, 36};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = soln(arr, 0, n - 1);
    if (pivot != -1)
    {
        printf("Pivot: %d\n", pivot);
    }
    else
    {
        printf("Pivot not found\n");
    }
}