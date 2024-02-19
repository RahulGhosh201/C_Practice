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
        for (int k = 1; k <= x; k++)
        {
            printf("*");
        }
        x--;
        a++;
        printf("\n");
    }
}