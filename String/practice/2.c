#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }
    printf("Length of %s without using library: %d", str, n);
    printf("Length of %s using library: %d", str, strlen(str));
    return 0;
}