#include <stdio.h>
#include <math.h>

int count(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int isAutomorphic(int n)
{
    int sqr = n * n;
    // int div=pow(10,count(n));
    int rem = sqr % (int)(pow(10, count(n)));
    if (rem == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n = 76;
    if (isAutomorphic(n))
    {
        printf("%d is a automorphic number", n);
    }
    else
    {
        printf("%d is not a automorphic number", n);
    }
}