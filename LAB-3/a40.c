// Q-40
/* READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
   LIST OF NUMBERS READ */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0; // Initialize sum of numbers

    for (int i = 0;; i++) // Infinite loop until negative number entered
    {
        int n; // Declare input number
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 0) // Break loop if negative number entered
        {
            break;
        }

        sum += n; // Add entered number to sum
    }

    printf("Sum of numbers is: %d\n", sum);

    return 0;
}

// End of the program
