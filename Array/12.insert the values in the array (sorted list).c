#include <stdio.h>

void soln(int arr[], int n, int key)
{
    int i = n - 1;
    while (i >= 0 && arr[i] > key)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    n++;
    printf("Elements of the array: ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n = 0, key = 0;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    soln(arr, n, key);
    return 0;
}
