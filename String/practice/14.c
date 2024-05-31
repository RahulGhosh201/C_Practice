#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubstring(char *str1, char *str2)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == str2[0])
        {
            for (int j = 0; j < strlen(str2); j++)
            {
                if (str1[i + j] != str2[j])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    char str1[30], str2[30];
    printf("Enter str1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter str2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // char *result = strstr(str1, str2);
    // if (result != NULL)
    // {
    //     printf("\"%s\" is found in \"%s\" at position %ld", str2, str1, result - str1);
    // }
    // else
    // {
    //     printf("\"%s\" is not found in \"%s\"", str2, str1);
    // }
    if (isSubstring(str1, str2))
    {
        printf("\"%s\" is in \"%s\"", str2, str1);
    }
    else
    {
        printf("\"%s\" is not in \"%s\"", str2, str1);
    }
    return 0;
}
// we can code it easily using strstr()
// it returns a pointer to the first character of haystack that matches with needle
// if needle is not found then it returns NULL
// if needle is an empty string then it returns haystack