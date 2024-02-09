#include <stdio.h>

int compare(const void *one, const void *two)
{
    return *(int *)one > *(int *)two;
}

void soln(int arr[], int n)
{
    qsort(arr, n, sizeof(int), compare);
    printf("Ans: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {4, 14, 8, 0, 2, 5, 2, 1, 0, 17, 9, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
}