#include <stdio.h>
#include <ctype.h>
#include <string.h>

void modifyString(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
}

int main()
{
    char str[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Before modification, str: %s\n", str);
    modifyString(str);
    printf("After modification, str: %s\n", str);
    return 0;
}