#include <stdio.h>

void soln(int arr[], int n)
{
    int even[n], odd[n], k = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[k++] = arr[i];
        }
        else
        {
            odd[l++] = arr[i];
        }
    }
    printf("Even array elements: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", even[i]);
    }
    printf("Odd array elements: ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", odd[i]);
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