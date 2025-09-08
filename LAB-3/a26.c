// Lab-3 Q-26
/* PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;                         // Declare upper limit number
    int sum_even = 0, sum_odd = 1; // Initialize sums (sum_odd starts at 1)

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        sum_even += 2 * i;          // Add even numbers: 2,4,6,...
        sum_odd += 2 * (i + 1) - 1; // Add odd numbers: 3,5,7,...
    }

    printf("Sum of even numbers between 1 to %d is: %d\n", n, sum_even);
    printf("Sum of odd numbers between 1 to %d is: %d\n", n, sum_odd);

    return 0;
}

// End of the program
