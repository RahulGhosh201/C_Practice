#include <stdio.h>

void countFrequency(int arr[], int size)
{
    // Create an array to store frequencies, initialized to 0
    int frequency[size];
    for (int i = 0; i < size; i++)
    {
        frequency[i] = 0;
    }

    // Count the frequency of each element
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        frequency[currentElement]++;
    }

    // Print the frequency of each element
    printf("Element\tFrequency\n");
    for (int i = 0; i < size; i++)
    {
        if (frequency[i] > 0)
        {
            printf("%d\t%d\n", i, frequency[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 7, 2, 5, 6, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nFrequency of each element:\n");
    countFrequency(arr, size);

    return 0;
}
