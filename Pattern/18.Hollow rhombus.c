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
            if (i == 1 || i == r || k == 1 || k == r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        a++;
        printf("\n");
    }
}