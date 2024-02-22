#include <stdio.h>
#include <stdlib.h> //using for the qsort()
#include <string.h> //using for the strcmp

int myCompare(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

void sort(const char *a[], int n)
{
    qsort(a, n, sizeof(const char *), myCompare);
}

int main()
{
    const char *a[] = {"b", "a", "c"};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Elements of the array before sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s\n", i, a[i]);
    }
    sort(a, n);
    printf("Elements of the array after sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s\n", i, a[i]);
    }
}