#include <stdio.h>
#include <string.h>

void soln(char *str, char *largest, char *smallest)
{
    char *word;
    int maxLength = 0, minLength = 100;

    word = strtok(str, " ");
    while (word != NULL)
    {
        int length = strlen(word);
        if (length > maxLength)
        {
            maxLength = length;
            strcpy(largest, word);
        }
        if (length < minLength)
        {
            minLength = length;
            strcpy(smallest, word);
        }
        word = strtok(NULL, " ");
    }
}

int main()
{
    char str[30], largest[30], smallest[30];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    soln(str, largest, smallest);
    printf("The largest word is %s\n", largest);
    printf("The smallest word is %s\n", smallest);
    return 0;
}