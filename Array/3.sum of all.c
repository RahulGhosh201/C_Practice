#include <stdio.h>

int soln(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    return ans;
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
    int ans = soln(arr, n);
    printf("Sum of all elements: %d\n", ans);
    return 0;
}
