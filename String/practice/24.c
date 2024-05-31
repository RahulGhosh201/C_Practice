#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool upper(char ch)
{
    // if(isupper(ch))
    // {
    //     return 1;
    // }else{
    //     return 0;
    // }
    if (ch >= 'a' && ch <= 'z')
        return 1;
    return 0;
}

int main()
{
    char ch;
    printf("Enter ch: ");
    scanf("%c", &ch);
    if (upper(ch))
    {
        printf("Entered letter is a uppercase letter");
    }
    else
    {
        printf("Entered letter is not a upper case letter");
    }
    return 0;
}
