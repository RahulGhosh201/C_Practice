#include <stdio.h>

// int compare(const void *one, const void *two)
// {
//     return *(int *)one > *(int *)two;
// }

void soln(int arr[], int n)
{
    // qsort(arr, n, sizeof(int), compare);
    int count0 = 0, count1 = 0, count2 = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[k++] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[k++] = 1;
    }
    for (int i = count0 + count1; i < count0 + count1 + count2; i++)
    {
        arr[k++] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}