#include <stdio.h>
#include <string.h>

char soln(char str[])
{
    char cnt[256] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        cnt[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (cnt[(unsigned char)str[i]] == 2)
        {
            return str[i];
        }
    }
    return '\0';
}

int main()
{
    char str[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char c = soln(str);
    printf("Te first repetitive character is %c", c);
    return 0;
}