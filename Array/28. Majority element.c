#include <stdio.h>

int findMajorityElement(int arr[], int size)
{
    // Find the maximum element in the array
    int maxElement = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    // Create a frequency count array and initialize to zero
    int freqCount[maxElement + 1];
    for (int i = 0; i <= maxElement; i++)
    {
        freqCount[i] = 0;
    }

    // Count the occurrences of each element in the array
    for (int i = 0; i < size; i++)
    {
        freqCount[arr[i]]++;
    }

    // Find the element with frequency greater than n/2
    for (int i = 0; i <= maxElement; i++)
    {
        if (freqCount[i] > size / 2)
        {
            return i;
        }
    }

    return -1; // No majority element found
}

int main()
{
    int arr[] = {3, 3, 3, 2, 4, 3, 2, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = findMajorityElement(arr, size);

    if (majorityElement != -1)
    {
        printf("The majority element is: %d\n", majorityElement);
    }
    else
    {
        printf("No majority element found in the array.\n");
    }

    return 0;
}
