#include <stdio.h>
#include <string.h>

void soln(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }
}

int main()
{
    char str[20];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    soln(str);
    return 0;
}