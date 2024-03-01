// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool isAmicable(int a, int b)
{
    int temp1 = a, temp2 = b, sum1 = 0, sum2 = 0;
    for (int i = 1; i < temp1; i++)
    {
        if (temp1 % i == 0)
            sum1 += i;
    }
    for (int i = 1; i < temp2; i++)
    {
        if (temp2 % i == 0)
            sum2 += i;
    }
    if (sum1 == b && sum2 == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a[] = {220, 274, 1184, 1210};
    int n = sizeof(a) / sizeof(a[0]);
    int cnt = 0, x = 0, y = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (isAmicable(a[i], a[j]))
            {
                cnt++;
            }
        }
    }
    printf("Ans: %d", cnt);
    return 0;
}