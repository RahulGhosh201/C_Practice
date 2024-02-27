#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isNarcissistic(int n)
{
    int temp = n, ans = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        ans += pow(rem, 3);
        temp /= 10;
    }
    if (ans == n)
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
    int n = 154;
    if (isNarcissistic(n))
    {
        printf("%d is a narcissistic number", n);
    }
    else
    {
        printf("%d is not a narcissistic number", n);
    }
}