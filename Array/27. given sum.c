#include <stdio.h>

void soln(int arr[], int n, int key)
{
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if (sum == key)
            {
                a = i;
                b = j;
                break;
            }
        }
    }
    printf("Ans: %d %d\n", a, b);
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
    int key = 15;
    soln(arr, n, key);
    return 0;
}