#include <stdio.h>

int main()
{
    int n = 5, a = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            printf("*");
        }
        a++;
        printf("\n");
    }
}