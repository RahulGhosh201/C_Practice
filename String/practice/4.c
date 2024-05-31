#include <stdio.h>
#include <string.h>

void reverseStr(char *str)
{
    int left = 0, right = strlen(str) - 1;
    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main()
{
    char str[20];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    reverseStr(str);
    printf("After reversal: %s", str);
    return 0;
}