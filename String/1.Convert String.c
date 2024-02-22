#include <stdio.h>
#include <ctype.h>
#include <string.h>

void soln(char *str)
{
    str[0] = toupper(str[0]);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    printf("%s", str);
}

int main()
{
    char str[] = "I am Rahul ghosh.";
    soln(str);
}