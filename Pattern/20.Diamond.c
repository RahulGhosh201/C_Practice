#include <stdio.h>

int main()
{
    int r = 5, x = r - 1, a = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = x; j >= 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= a; k++)
        {
            printf("*");
        }
        a += 2;
        x--;
        printf("\n");
    }
    // r -= 1;
    int b = a - 4, c = 1;
    for (int i = 1; i <= r - 1; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf(" ");
        }
        for (int j = b; j >= 1; j--)
        {
            printf("*");
        }
        c++;
        b -= 2;
        printf("\n");
    }
}