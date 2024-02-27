#include <stdio.h>

int isUgly(int x)
{
    if (x <= 0)
        return 0;
    while (x % 2 == 0)
    {
        x /= 2;
    }
    while (x % 3 == 0)
    {
        x /= 3;
    }
    while (x % 5 == 0)
    {
        x /= 5;
    }
    return x == 1;
}

int main()
{
    int x = 25;
    if (isUgly(x))
    {
        printf("%d is a ugly number\n", x);
    }
    else
    {
        printf("%d is not a ugly number\n", x);
    }
}