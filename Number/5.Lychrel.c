#include <stdio.h>
#include <stdbool.h>

int reverse(int n)
{
    int temp = n, ans = 0;
    while (temp != 0)
    {
        int rem = temp % 10;  // 7
        ans = ans * 10 + rem; // 7
        temp /= 10;           // 4
    }
    return ans;
}

bool isPalindrome(int n)
{
    int temp = reverse(n);
    if (temp == n)
        return true;
    else
        return false;
}

bool isLychrel(int n)
{
    int temp = n + reverse(n);
    if (isPalindrome(temp))
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
    int n = 47;
    if (isLychrel(n) == true)
    {
        printf("%d is a Lychrel number", n);
    }
    else
    {
        printf("%d is not a Lychrel number", n);
    }
    // printf("%d",reverse(n));
}