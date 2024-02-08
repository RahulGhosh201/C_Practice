#include <stdio.h>

void soln(int arr[], int n)
{
    int min, ans;
    if (arr[0] < arr[1])
    {
        min = arr[0];
        ans = arr[1];
    }
    else
    {
        min = arr[1];
        ans = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] < min)
        {
            ans = min;
            min = arr[i];
        }
        else if (arr[i] < ans && arr[i] != min)
        {
            ans = arr[i];
        }
    }
    printf("Ans: %d\n", ans);
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