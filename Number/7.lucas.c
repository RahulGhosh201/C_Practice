#include <stdio.h>

void lucas(int n)
{
    int a[n];
    a[0] = 2, a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("Ans: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n = 10;
    lucas(n);
}