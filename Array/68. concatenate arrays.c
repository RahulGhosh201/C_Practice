#include <stdio.h>

void soln(int a[], int b[], int x, int y)
{
    int ans[x + y], k = 0;
    if (a[0] < b[0])
    {
        for (int i = 0; i < x; i++)
        {
            ans[k++] = a[i];
        }
        for (int i = k; i < k + y; i++)
        {
            ans[k++] = b[i];
        }
    }
    else
    {
        for (int i = 0; i < y; i++)
        {
            ans[k++] = b[i];
        }
        for (int i = k; i < k + x; i++)
        {
            ans[k++] = a[i];
        }
    }
    printf("Ans: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", ans[i]);
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int b[] = {70, 80, 90, 100, 110, 120};
    int x = sizeof(a) / sizeof(a[0]);
    int y = sizeof(b) / sizeof(b[0]);
    soln(a, b, x, y);
}