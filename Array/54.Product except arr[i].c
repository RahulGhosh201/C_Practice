#include <stdio.h>

void soln(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = product / arr[i];
    }
    printf("Ans: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}