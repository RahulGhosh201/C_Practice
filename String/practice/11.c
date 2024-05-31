#include <stdio.h>
#include <string.h>

void rev(char *str)
{
    int left = 0, right = strlen(str) - 1;
    while (left < right)
    {
        char temp = str[right];
        str[right] = str[left];
        str[left] = temp;
        left++;
        right--;
    }
    printf("After reversal: %s", str);
}

int main()
{
    char str[30];
    printf("Enter str:");
    fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = "\0";
    rev(str);
    return 0;
}