#include <stdio.h>

void copy(char str[], int *size)
{
    char *ans;
    int i = 0;
    while (str[i] != '\0')
    {
        ans[i] = str[i];
        (*size)++;
        i++;
    }
    ans[i] = '\0';
    printf("Copied string: %s\n", ans);
}

int main()
{
    char str[20];
    int size;
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: %s\n", str);
    copy(str, &size);
    printf("Copied characters: %d\n", size);
    return 0;
}