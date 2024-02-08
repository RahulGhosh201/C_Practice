#include <stdio.h>

void soln(int a[], int b[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    int ans[m + n];
    while (i != m && j != n)
    {
        if (a[i] <= b[j])
        {
            ans[k++] = a[i++];
        }
        else
        {
            ans[k++] = b[j++];
        }
    }
    while (i != m)
    {
        ans[k++] = a[i++];
    }
    while (j != n)
    {
        ans[k++] = b[j++];
    }
    printf("Elements of the merged sort array: ");
    for (int x = 0; x < k; x++)
    {
        printf("%d ", ans[x]);
    }
    printf("\n");
}

int main()
{
    int a[] = {10, 12, 15, 16, 17, 20}, b[] = {9, 11, 14, 16, 19};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    soln(a, b, m, n);
    return 0;
}