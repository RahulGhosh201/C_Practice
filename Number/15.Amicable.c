// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool isAmicable(int a, int b)
{
    int temp1 = a, temp2 = b, sum1 = 0, sum2 = 0;
    for (int i = 1; i < temp1; i++)
    {
        if (temp1 % i == 0)
            sum1 += i;
    }
    for (int i = 1; i < temp2; i++)
    {
        if (temp2 % i == 0)
            sum2 += i;
    }
    if (sum1 == b && sum2 == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a = 284, b = 220;
    if (isAmicable(a, b))
    {
        printf("%d and %d are amicable", a, b);
    }
    else
    {
        printf("%d and %d are not amicable", a, b);
    }
    return 0;
}