#include <stdio.h>

void soln(int arr[], int n)
{
    int cnt[n];
    for (int i = 0; i < n; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }
    printf("Frequency of elements:\n");
    for (int i = 0; i < n; i++)
    {
        if (cnt[i] > 0)
        {
            printf("%d occurs %d times\n", i, cnt[i]);
        }
    }
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