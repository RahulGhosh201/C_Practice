#include <stdio.h>
#include <stdbool.h>

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

int isDisarium(int n)
{
    int i = count(n), ans = 0, temp = n;
    while (n != 0)
    {
        int dig = n % 10;
        ans += pow(dig, i);
        n /= 10;
        i--;
    }
    if (ans == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int n = 135;
    if (isDisarium(n))
    {
        printf("%d is a disarium number", n);
    }
    else
    {
        printf("%d is not a disarium number", n);
    }
}
