// Lab-3 Q-29 and Q-30
/* PROGRAM TO CHECK WHETHER A NO IS PALINDROME OR NOT
   PROGRAM TO REVERSE OF A GIVEN NO */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, temp, n, reversed = 0; // Declare variables for number, temp copy, digits count, and reversed number

    printf("Enter the number of digits in the number: ");
    scanf("%d", &n);

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num; // Copy original number to temp

    while (temp > 0)
    {
        int digit = temp % 10;            // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        temp /= 10;                       // Remove last digit from temp
    }

    if (reversed == num) // Check if reversed equals original number
        printf("%d is a Palindrome number.\n", reversed);
    else
        printf("%d is not a Palindrome number.\n", reversed);

    return 0;
}

// End of the program
