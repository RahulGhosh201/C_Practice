#include <stdio.h>

int main()
{
    int r = 5, a = r - 1, b = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = a; j >= 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= b; k++)
        {
            printf("*");
        }
        a--;
        b += 2;
        printf("\n");
    }
}