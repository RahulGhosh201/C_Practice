#include <stdio.h>

int findCeil(int arr[], int n, int x)
{
    int low = 0, high = n - 1, mid;
    int ceil = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return arr[mid];
        }
        else if (x < arr[mid])
        {
            ceil = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ceil;
}

int findFloor(int arr[], int n, int x)
{
    int low = 0, high = n - 1, mid, floor = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return arr[mid];
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            floor = arr[mid];
            low = mid + 1;
        }
    }
    return floor;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Te given array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf(" Number: %d", i);
        printf(" Celling is: %d", findCeil(arr, n, i));
        printf(" Floor is: %d", findFloor(arr, n, i));
        printf("\n");
    }
    return 0;
}