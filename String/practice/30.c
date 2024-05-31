#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    return 0;
}

void soln(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]) && isVowel(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
}

int main()
{
    char str[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Before modyfying: %s\n", str);
    soln(str);
    printf("After modyfying: %s\n", str);
    return 0;
}