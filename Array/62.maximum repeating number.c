#include <stdio.h>

#define RANGE 100
int maxRepeatingElement(int arr[], int size)
{

    int freq[RANGE] = {0};

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    int maxFreq = -1, maxElement = -1;
    for (int i = 0; i < RANGE; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxElement = i;
        }
    }

    return maxElement;
}

int main()
{
    int arr[] = {2, 3, 3, 5, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int maxRepeating = maxRepeatingElement(arr, size);
    printf("The maximum repeating element in the array is: %d\n", maxRepeating);

    return 0;
}
