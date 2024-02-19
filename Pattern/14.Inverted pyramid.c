#include <stdio.h>

int main()
{
    int r = 5, x = (2 * r) - 1, a = 0;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            printf(" ");
        }
        for (int j = x; j >= 1; j--)
        {
            printf("*");
        }
        a++;
        x -= 2;
        printf("\n");
    }
}