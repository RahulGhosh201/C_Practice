#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *soln(char *s1, char *s2)
{
    int n1 = strlen(s1), n2 = strlen(s2);
    char *ans = (char *)malloc((n1 + n2) * sizeof(char));
    int j = 0;
    for (int i = 0; i < n1; i++)
    {
        ans[j++] = s1[i];
    }
    ans[j++] = ' ';
    for (int i = 0; i < n2; i++)
    {
        ans[j++] = s2[i];
    }
    ans[j] = '\0';
    return ans;
}

int main()
{
    char s1[30], s2[30];
    printf("Enter s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    char *ans = soln(s1, s2);
    printf("After concentration the string is %s", ans);
    return 0;
}