#include <stdio.h>

int soln(int arr[], int n)
{
    int maxElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    int *hashTable = (int *)calloc(maxElement + 1, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        hashTable[arr[i]]++;
    }
    for (int i = 0; i < maxElement + 1; i++)
    {
        if (hashTable[arr[i]] > n / 2)
        {
            free(hashTable);
            return i;
        }
    }
    free(hashTable);
    return -1;
}

int main()
{
    int arr[] = {1, 3, 3, 7, 4, 3, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", arr[soln(arr, n)]);
    return 0;
}