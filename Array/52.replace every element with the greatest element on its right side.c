#include <stdio.h>

void soln(int arr[], int n)
{
    int max = arr[n - 1];
    arr[n - 1] = 0; // the last element is 0 as there is no greatest element in it's right side
    for (int i = n - 2; i >= 0; i--)
    { // iterating from right to left
        int temp = arr[i];
        arr[i] = max;
        if (max < temp)
        {
            max = temp;
        }
    }
    printf("Ans: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
}