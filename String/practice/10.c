#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a > b) ? a : b)

void soln(char str[])
{
    int cnt[256] = {0};
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        cnt[(unsigned char)str[i]]++;
    }

    int max_xnt = 0;
    char ans = '\0';
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] > max_xnt)
        {
            max_xnt = cnt[i];
            ans = (char)i;
        }
    }
    printf("The highest frquency of character: %c\n", ans);
    printf("Appears %d number of times", max_xnt);
}

int main()
{
    char str[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    soln(str);
    return 0;
}