#include <stdio.h>

int main()
{
    int r = 4;
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= r - 1; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == r - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}