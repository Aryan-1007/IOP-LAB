// Lab-3 Q-31
/* PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0; // Declare number and initialize sum to 0

    printf("Enter the number: \n");
    scanf("%d", &n);

    while (n > 0)
    {
        int digit = n % 10; // Extract last digit
        sum += digit;       // Add digit to sum
        n /= 10;            // Remove last digit
    }

    printf("Sum of digits is %d\n", sum);

    return 0;
}

// End of the program
