#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool punct(char ch)
{
    // if (ispunct(ch))
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
    char str[] = "~@#$^&*()_+<>?,.";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            return 1;
        }
    }
    return 0;
}

int soln(char *str)
{
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (punct(str[i]))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    char str[20];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Number of punctuations in the string: %d", soln(str));
    return 0;
}