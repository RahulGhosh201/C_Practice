#include <stdio.h>

void soln(int arr[], int n)
{
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             printf(" %d ", arr[i]);
    //         }
    //     }
    // }

    int *hashTable = (int *)calloc(n, sizeof(int));
    printf("The repeating elements are: ");
    for (int i = 0; i < n; i++)
    {
        if (hashTable[arr[i]] == 1)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            hashTable[arr[i]]++;
        }
    }
    free(hashTable);
}

int main()
{
    int arr[] = {2, 7, 4, 7, 8, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: ");
    soln(arr, n);
    return 0;
}