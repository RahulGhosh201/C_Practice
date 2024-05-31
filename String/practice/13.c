#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *soln(char *str, int s_pos, int length)
{
    char *ans = (char *)malloc((length + 1) * sizeof(char));
    int i = 0;
    for (i = 0; i < length; i++)
    {
        ans[i] = str[s_pos + i];
    }
    ans[i] = '\0';
    // printf("Substring: %s", ans);
    return ans;
}

int main()
{
    char str[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int s_pos = 0, length = 0;
    printf("Enter starting position:");
    scanf("%d", &s_pos);
    printf("Enter length of the substring: ");
    scanf("%d", &length);
    // soln(str, s_pos, length);
    char *ans = soln(str, s_pos, length);
    printf("Substring: %s", ans);
    return 0;
}