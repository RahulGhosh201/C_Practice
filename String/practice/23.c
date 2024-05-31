#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isHex(char c)
{
    // if(isxdigit(ch)){
    //     return 1;
    // }else{
    //     return 0;
    // }
    if ((c >= 'A' && c <= "F") || (c >= "a" && c <= 'f') || (c >= '0' && c <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char ch;
    printf("Enter ch: ");
    scanf("%c", &ch);
    if (isHex(ch))
    {
        printf("%c is a hexadecimal", ch);
    }
    else
    {
        printf("%c is not a hexadecimal", ch);
    }
    return 0;
}