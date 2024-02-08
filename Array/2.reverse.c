#include <stdio.h>

void soln(int arr[], int n)
{
    printf("Elements of the array after reversing: ");
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     printf("%d ", arr[i]);
    // }

    // using a temp arr
    // int temp[n], k = 0;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     temp[k++] = arr[i];
    // }
    // printArr(temp, n);

    // swaping elements
    int s = 0, e = n - 1;
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    printArr(arr, n);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
