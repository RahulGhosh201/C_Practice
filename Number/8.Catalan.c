#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate the nth Catalan number
unsigned long long catalan(int n)
{
    return factorial(2 * n) / (factorial(n + 1) * factorial(n));
}

int main()
{
    int n = 10; // Number of Catalan numbers to display
    int i;

    printf("First %d Catalan numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%llu ", catalan(i));
    }
    printf("\n");

    return 0;
}
