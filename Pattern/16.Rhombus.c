#include <stdio.h>

int main()
{
    int r = 5, x = r - 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = x; j >= 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= r; k++)
        {
            printf("*");
        }
        printf("\n");
        x--;
    }
}