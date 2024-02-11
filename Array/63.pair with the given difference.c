#include <stdio.h>
#include <stdbool.h>

void soln(int arr[], int n, int key)
{
    printf("Ans: ");
    // for (int i = 0; i < n - 1; i++)
    // {
    //     // int temp = arr[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] - arr[i] == key)
    //         {
    //             printf("%d %d", arr[i], arr[j]);
    //             break;
    //         }
    //     }
    // }

    bool hash[n];
    for (int i = 0; i < n; i++)
    {
        hash[i] = false;
    } // at first we have to make all the elements as false
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = true;
    } // only the elements present in the arr[] are marked as true
    for (int i = 0; i < n; i++)
    {
        int complement = arr[i] + key; //
        if (hash[complement])
        { // checking if arr[i]+key is present in the arr or not
            printf("%d %d", arr[i], complement);
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 15, 39, 75, 92};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n, 53);
}