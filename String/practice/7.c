#include <stdio.h>
#include <ctype.h>

void soln(char *str, int *num, int *dig, int *sp_char)
{
    *num = 0;
    *dig = 0;
    *sp_char = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
            (*num)++;
        else if (isdigit(str[i]))
            (*dig)++;
        else if (ispunct(str[i]) || str[i] == ' ')
            (*sp_char)++;
    }
}

int main()
{
    char str[] = "Welcome to w3resource.com";
    int num, dig, sp_char;
    soln(str, &num, &dig, &sp_char);
    printf("Alphabets: %d\n", num);
    printf("Digits: %d\n", dig);
    printf("Special characters: %d\n", sp_char + 1);
    return 0;
}