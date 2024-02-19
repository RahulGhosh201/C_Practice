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
        for (int k = x; k >= 1; k--)
        {
            if (i == 1 || i == r || k == x || k == 1)
                printf("*");
            else
                printf(" ");
        }
        a++;
        x -= 2;
        printf("\n");
    }
}