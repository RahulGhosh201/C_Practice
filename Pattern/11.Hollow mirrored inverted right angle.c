#include <stdio.h>

int main()
{
    int r = 5, x = r, a = 0;
    for (int i = r; i >= 1; i--)
    {
        for (int j = 0; j <= a; j++)
        {
            printf(" ");
        }
        for (int k = x; k >= 1; k--)
        {
            if (i == r || i == 1 || k == x || k == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        x--;
        a++;
        printf("\n");
    }
}