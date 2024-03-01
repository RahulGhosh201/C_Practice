#include <stdio.h>

int pellNumber(int n)
{
    // if(n==0) return 0;
    // if(n==1) return 1;
    if (n <= 1)
        return n;
    else
        return 2 * (pellNumber(n - 1)) + pellNumber(n - 2);
}

int main()
{
    int n = 20;
    printf("Pell series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", pellNumber(i));
    }
}