#include <stdio.h>
#include <string.h>
#include <ctype.h>

void soln(char *str)
{
    int j = 0, n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main()
{
    char str[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Before removal: %s\n", str);
    soln(str);
    printf("After removal: %s\n", str);
    return 0;
}