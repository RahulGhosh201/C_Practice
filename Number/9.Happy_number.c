#include <stdio.h>

// Function to calculate the sum of squares of digits of a number
int sum_of_squares(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is happy
int is_happy(int n)
{
    int slow = n;
    int fast = n;
    do
    {
        slow = sum_of_squares(slow);
        fast = sum_of_squares(sum_of_squares(fast));
    } while (slow != fast);

    return slow == 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_happy(num))
        printf("%d is a happy number.\n", num);
    else
        printf("%d is not a happy number.\n", num);

    return 0;
}
