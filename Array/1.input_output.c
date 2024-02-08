#include <stdio.h>

void soln(int n)
{
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    printf("Array elements are: ");
    for (int i = 1; i <= n; i++)
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
    soln(n);
    return 0;
}
