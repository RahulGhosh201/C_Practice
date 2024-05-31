#include <stdio.h>
#include <string.h>

int soln(char *str, char ch)
{
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    char str[20], ch;
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter ch:");
    scanf("%c", &ch);
    int ans = soln(str, ch);
    printf("The frequency of \'%c\' is %d", ch, ans);
    return 0;
}