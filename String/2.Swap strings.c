#include <stdio.h>

// void swap(char str1[], char str2[])
// {
//     char *temp = str1;
//     str1 = str2;
//     str2 = temp;
//     printf("str1: %s, str2: %s", str1, str2);
// }

// int main()
// {
//     char str1[] = "rahul";
//     char str2[] = "ghosh";
//     printf("str1: %s, str2: %s", str1, str2);
//     swap(str1, str2);

//     return 0;
// }

void swap(char **str1, char **str2)
{
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main()
{
    char *str1 = "rahul";
    char *str2 = "ghosh";
    printf("str1: %s, str2: %s", str1, str2);
    swap(&str1, &str2);
    printf("str1: %s, str2: %s", str1, str2);
    return 0;
}