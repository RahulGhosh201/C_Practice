#include <stdio.h>

void soln(int arr[], int n, int pos)
{
    int temp[n], k = 0;
    for (int i = pos; i < n; i++)
    {
        temp[k++] = arr[i];
    }
    for (int i = 0; i < pos; i++)
    {
        temp[k++] = arr[i];
    }
    printf("Ans: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 4;
    soln(arr, n, pos);
    return 0;
}