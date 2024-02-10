#include <stdio.h>

int compare(void const *one, void const *two)
{
    return *(int *)one > *(int *)two;
}

int soln(int a[], int b[], int n)
{
    qsort(a, n, sizeof(int), compare);
    qsort(b, n, sizeof(int), compare);
    int ans = 0;
    if (n % 2 != 0)
    {
        ans = (a[n / 2] + b[n / 2]) / 2;
    }
    else
    {
        int x = (a[n / 2] + a[(n + 1) / 2]) / 2;
        int y = (b[n / 2] + b[(n + 1) / 2]) / 2;
        ans = floor((x + y) / 2);
    }
    return ans;
}

int main()
{
    int a[] = {5, 13, 1, 35, 24, 7}, b[] = {3, 8, 17, 32, 15, 9};
    // 1,5,7,13,24,35
    // 3,8,9,15,17,32
    // 11
    int n = sizeof(a) / sizeof(a[0]);
    printf("Ans: %d", soln(a, b, n));
}