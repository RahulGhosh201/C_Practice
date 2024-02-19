#include <stdio.h>

int main()
{
    int r = 5;
    // j=r-i+1
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (i == j || j == r - i + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    }
}