#include <stdio.h>
#include <stdbool.h>

bool isAbundant(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum > n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void abundant(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        if (isAbundant(i))
        {
            printf("%d, ", i);
        }
    }
}

int main()
{
    int x = 1, y = 1000;
    abundant(x, y);
    return 0;
}