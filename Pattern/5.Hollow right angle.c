#include <stdio.h>

int main()
{
    int r = 5, a = 0;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == 1 || i == r || j == 1 || j == a)
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