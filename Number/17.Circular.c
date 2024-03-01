#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int rotateNumber(int n)
{
    int digit = log10(n);
    int lastDigit = n / (int)pow(10, digit);
    int remDigit = n % (int)pow(10, digit);
    return (remDigit * 10) + lastDigit;
}

bool isCircular(int num)
{
    int temp = num;
    do
    {
        if (!isPrime(temp))
        {
            return false;
        }
        temp = rotateNumber(temp);
    } while (temp != num);
    return true;
}

int main()
{
    int n = 1193;
    if (isCircular(n))
        printf("%d is a circular number", n);
    else
        printf("%d is not a circular number", n);
}