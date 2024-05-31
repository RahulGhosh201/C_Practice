#include <stdio.h>
#include <string.h>

void soln(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '*';
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
}