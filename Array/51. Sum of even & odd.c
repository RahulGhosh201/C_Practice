#include <stdio.h>

void soln(int n)
{
    int sumEven = 0, sumOdd = 0;
    while (n)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            sumEven += digit;
        }
        else
        {
            sumOdd += digit;
        }
    }
    printf("Ans: %d %d", sumEven, sumOdd);
}

int main()
{
    int n = 132456;
    soln(n);
    return 0;
}