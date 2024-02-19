#include <stdio.h>
void soln(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == n - i + 1) // i,j=1,n-1 is used for all the border line * and i==j for the \ and j=n-i+1 for /
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

int main()
{
    int n = 0;
    printf("Enter no of rows:");
    scanf("%d", &n);
    soln(n);
    return 0;
}
// 01234
// 01 34
// 0 2 4
// 01 34
// 01234
// *****
// ** **
// * * *
// ** **
// *****