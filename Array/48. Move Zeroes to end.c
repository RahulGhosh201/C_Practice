#include <stdio.h>

void soln(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] != 0)
        {
            left++;
        }
        while (arr[right] != 0)
        {
            right--;
        }
        if (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
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
    int arr[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}