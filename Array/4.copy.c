#include <stdio.h>

void soln(int arr[], int n)
{
    int ans[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        ans[k++] = arr[i];
    }
    printArr(ans, n);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 0;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    soln(arr, n);
    return 0;
}