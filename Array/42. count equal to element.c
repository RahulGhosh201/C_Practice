#include <stdio.h>

#define MAX_SIZE 1000

int soln(int hashTable[], int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        hashTable[arr[i]]++;
    }
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (hashTable[i] == arr[i])
        {
            return arr[i];
        }
    }
}

int main()
{
    int arr[] = {2, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int hashTable[MAX_SIZE] = {0};
    printf("Ans: %d", soln(hashTable, arr, n));

    return 0;
}
