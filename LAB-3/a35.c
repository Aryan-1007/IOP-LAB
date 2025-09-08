// Q-35
/* READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF */

#include <stdio.h>

int sum_of_digits(int n)
{
    if (n < 10) // Base case: single digit number
    {
        return n;
    }
    else
    {
        return sum_of_digits(n / 10 + n % 10); // Recursive sum of digits until single digit
    }
}

int main(int argc, char const *argv[])
{
    int n; // Declare input number

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Single digit sum of digits of %d is %d\n", n, sum_of_digits(n));

    return 0;
}

// End of the program
