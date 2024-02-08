#include <stdio.h>

int findOddElement(int arr[], int size)
{
    // Find the maximum element in the array
    // int maxElement = arr[0];
    // for (int i = 1; i < size; i++)
    // {
    //     if (arr[i] > maxElement)
    //     {
    //         maxElement = arr[i];
    //     }
    // }

    // // Create a frequency count array and initialize to zero
    // int freqCount[maxElement + 1];
    // for (int i = 0; i <= maxElement; i++)
    // {
    //     freqCount[i] = 0;
    // }

    // // Count the occurrences of each element in the array
    // for (int i = 0; i < size; i++)
    // {
    //     freqCount[arr[i]]++;
    // }

    // // Find the element with frequency greater than n/2
    // for (int i = 0; i <= maxElement; i++)
    // {
    //     if ((freqCount[i] % 2) != 0)
    //     {
    //         return i;
    //     }
    // }

    // return -1; // No majority element found
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {8, 3, 8, 5, 4, 3, 4, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int oddElement = findOddElement(arr, size);

    if (oddElement != -1)
    {
        printf("Ans: %d\n", oddElement);
    }
    else
    {
        printf("Not found.\n");
    }

    return 0;
}
