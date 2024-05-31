#include <stdio.h>
#include <string.h>

int soln(const char *haystack, const char *needle)
{
    int count = 0;
    int needleLen = strlen(needle);
    int haystackLen = strlen(haystack);

    if (needleLen == 0)
    {
        return 0;
    }

    for (int i = 0; i <= haystackLen - needleLen; i++)
    {
        int j;
        for (j = 0; j < needleLen; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
        }
        if (j == needleLen)
        {
            count++;
            i += needleLen - 1;
        }
    }

    return count;
}

int main()
{
    char str[30], s[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter s: ");
    fgets(s, sizeof(s), stdin);
    str[strcspn(s, "\n")] = '\0';
    int ans = soln(str, s);
    printf("The frequency of the word \'%s\' is %d", s, ans);
    return 0;
}