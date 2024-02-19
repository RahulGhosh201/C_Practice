#include <stdio.h>

int main()
{
    int r = 5, x = r - 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = x; j <= 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= r; k++)
        {
            if (i == 1 || i == r || k == 1 || k == r)
                printf("*");
            else
                printf(" ");
        }
        x--;
        printf("\n");
    }
}