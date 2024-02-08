#include <stdio.h>

int soln(int arr[], int n)
{
    int maxElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    int rsum = (maxElement * (maxElement + 1)) / 2;
    int psum = 0;
    for (int i = 0; i < n; i++)
    {
        psum += arr[i];
    }
    return rsum - psum;
}

int main()
{
    int arr[] = {1, 3, 4, 2, 5, 6, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Missing number: %d\n", soln(arr, n));
    return 0;
}