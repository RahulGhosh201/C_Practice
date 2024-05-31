#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    return 0;
}

void soln(char *str, int *cnt_vowel, int *cnt_consonant)
{
    *cnt_consonant = 0;
    *cnt_vowel = 0;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]))
        {
            if (isVowel(str[i]))
                (*cnt_vowel)++;
            else
                (*cnt_consonant)++;
        }
    }
}

int main()
{
    int cnt_vowel, cnt_consonant;
    char str[50];
    printf("Enter str:");
    fgets(str, sizeof(str), stdin);
    soln(str, &cnt_vowel, &cnt_consonant);
    printf("Number of vowels in the string: %d\n", cnt_vowel);
    printf("Number of consonants in the string: %d\n", cnt_consonant);
    return 0;
}