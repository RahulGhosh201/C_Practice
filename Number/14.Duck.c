#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a duck number
bool isDuck(int num)
{
    // Convert the number to a string
    char str[20];
    sprintf(str, "%d", num);

    // Iterate through the digits of the number
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0' && i != 0)
        {
            // If a zero is found and it's not the first digit
            return true;
        }
    }
    return false;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isDuck(num))
        printf("%d is a duck number.\n", num);
    else
        printf("%d is not a duck number.\n", num);

    return 0;
}

// sprintf(char_arr_name, "%d", int_name); is