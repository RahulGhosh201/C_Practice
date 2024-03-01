#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    double result = 0;
    while (n <= 10)
    {
        result = pow(2, pow(2, n)) + 1;
        printf("%d:: %lf \n", n, result);
        n++;
    }
}