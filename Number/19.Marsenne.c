// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isMarsenne(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if ((pow(2, i) - 1) == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // Write C code here
    int n = 127;
    if (isMarsenne(n))
    {
        printf("%d is a marsenne number", n);
    }
    else
    {
        printf("%d is not a marsenne number", n);
    }
    return 0;
}