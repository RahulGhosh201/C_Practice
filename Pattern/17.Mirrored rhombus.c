#include <stdio.h>

int main()
{
    int r = 5, a = 0;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= r; k++)
        {
            printf("*");
        }
        a++;
        printf("\n");
    }
}