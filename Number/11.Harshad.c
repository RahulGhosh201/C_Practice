#include <stdio.h>

int sumOfDigits(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int dig = n % 10;
        ans += dig;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n = 156;
    int temp = sumOfDigits(n);
    if (n % temp == 0)
    {
        printf("%d is a harshad number", n);
    }
    else
    {
        printf("%d is not a harshad number", n);
    }
}