#include <stdio.h>

void soln(int arr[], int n, int pos)
{
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Elemets of the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 0, pos = 0;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    soln(arr, n, pos);
    return 0;
}