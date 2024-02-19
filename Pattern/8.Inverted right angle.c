#include <stdio.h>

int main()
{
    int r = 5, x = r;
    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <= x; j++)
        {
            printf("*");
        }
        x--;
        printf("\n");
    }
}