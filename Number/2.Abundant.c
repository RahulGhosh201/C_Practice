#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int isAbundant(int x)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int x = 25;
    if (isAbundant(x) > x)
    {
        printf("%d is an abundant number\n", x);
    }
    else
    {
        printf("%d is not an abundant number\n", x);
    }
}