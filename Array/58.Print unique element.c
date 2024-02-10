#include <stdio.h>

void soln(int arr[], int n)
{
    printf("Ans: ");
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 5, 8, 5, 7, 3, 2, 4, 1, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
}