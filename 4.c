#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[1000];
    char word[] = "the";
    int count = 0;

    printf("Input the string: ");
    fgets(string, sizeof(string), stdin);

    // Convert the word 'the' to lowercase
    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = tolower(word[i]);
    }

    // Iterate over the string and count occurrences of 'the'
    for (int i = 0; string[i] != '\0'; i++) {
        if (tolower(string[i]) == word[0]) {
            int j;
            for (j = 1; word[j] != '\0'; j++) {
                if (tolower(string[i + j]) != word[j]) {
                    break;
                }
            }
            if (word[j] == '\0' && !isalnum(string[i + j])) {
                count++;
            }
        }
    }

    printf("The frequency of the word '%s' is : %d\n", word, count);

    return 0;
}
