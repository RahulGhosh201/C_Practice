#include <stdio.h>
#include <stdbool.h>

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}

bool isNaven(int n)
{
    if ((n % sumOfDigits(n)) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {18, 15, 19, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (isNaven(arr[i]))
        {
            printf("%d is a naven number\n", arr[i]);
        }
        else
        {
            printf("%d is not a naven number\n", arr[i]);
        }
    }
}