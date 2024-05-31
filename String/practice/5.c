#include <stdio.h>
#include <string.h>

int soln(char *str)
{
    int n = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            n++;
        }
    }
    return n + 1;
}

int main()
{
    char str[100];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    int ans = soln(str);
    printf("Total no of words in the string is: %d", ans);
    return 0;
}