#include <stdio.h>

void soln(int a[], int b[], int n, int m)
{
    int ans[n + m], k = 0, i = 0, j = 0;
    while (i != n && j != m)
    {
        if (a[i] < b[j])
        {
            ans[k++] = a[i++];
        }
        else if (b[j] > a[i])
        {
            ans[k++] = b[j++];
        }
        else
        {
            ans[k++] = a[i++];
            ans[k++] = b[j++];
        }
    }
    while (i != n)
    {
        ans[k++] = a[i++];
    }
    while (j != m)
    {
        ans[k++] = b[j++];
    }
    printf("Elements of the ans arr: ");
    for (int q = k - 1; q >= 0; q--)
    {
        printf("%d ", ans[q]);
    }
    printf("\n");
}

int main()
{
    int n = 0;
    printf("Enter no of elements in arr1: ");
    scanf("%d", &n);
    int arr1[n];
    int m = 0;
    printf("Enter no of elements in arr2: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter first array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter second array elements: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    soln(arr1, arr2, n, m);
    return 0;
}