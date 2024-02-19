#include <stdio.h>

int main()
{
    int r = 5;
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j <= r / 2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 1; i <= r; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j <= r / 2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}