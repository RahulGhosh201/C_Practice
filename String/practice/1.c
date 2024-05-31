#include <stdio.h>

int main()
{
    char str[20];
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("The string you entered is: %s", str);
    return 0;
}