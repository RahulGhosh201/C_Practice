#include <stdio.h>

#define MAX 100
void soln(int arr[], int n)
{
    // using flag
    // for (int i = 0; i < n; i++)
    // {
    //     int flag = 1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i != j && arr[i] == arr[j])
    //         {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if (flag == 1)
    //     {
    //         printf("%d ", arr[i]);
    //     }
    // }

    // using hashSet
    int hashSet[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        if (hashSet[arr[i]] == 0)
        {
            printf("%d ", arr[i]);
            hashSet[arr[i]] = 1;
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