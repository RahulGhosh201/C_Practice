#include <stdio.h>

int isPronic(int n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (i * (i + 1) == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n = 930;
    if (isPronic(n))
    {
        printf("%d is a pronic number", n);
    }
    else
    {
        printf("%d is not a pronic number", n);
    }
}