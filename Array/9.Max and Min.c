#include <stdio.h>

void soln(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Max: %d && Min: %d", max, min);
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