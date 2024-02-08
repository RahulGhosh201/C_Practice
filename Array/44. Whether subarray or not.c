#include <stdio.h>
#include <stdbool.h>

int soln(int a[], int b[], int m, int n)
{
    bool hashTable[1000] = {false};
    for (int i = 0; i < m; i++)
    {
        hashTable[a[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (!hashTable[b[i]])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a[] = {4, 8, 7, 11, 6, 9, 5, 0, 2}, b[] = {5, 4, 2, 0, 6};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    if (soln(a, b, m, n))
    {
        printf("It's a subarray");
    }
    else
    {
        printf("It's not a subarray");
    }
    return 0;
}