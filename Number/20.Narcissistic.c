// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int cntDigits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

bool isNarcissistic(int n)
{
    int dig = cntDigits(n), temp = 0, ans = n;
    while (n != 0)
    {
        int rem = n % 10;
        temp += pow(rem, dig);
        n /= 10;
    }
    if (temp == ans)
    {
        return true;
    }
    return false;
}

int main()
{
    // Write C code here
    int n = 9474;
    if (isNarcissistic(n))
    {
        printf("%d is a narcissistic number", n);
    }
    else
    {
        printf("%d is not a narcissistic number", n);
    }
    return 0;
}