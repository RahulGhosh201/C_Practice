#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isEqual(char *s1, char *s2)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    if (n1 != n2)
        return 0;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s1[] = "aabbcc";
    char s2[] = "abcdef";
    char s3[] = "aabbcc";
    if (isEqual(s1, s2))
        printf("Equal");
    else
        printf("Not equal");

    if (isEqual(s1, s3))
        printf("Equal");
    else
        printf("Not equal");
    return 0;
}