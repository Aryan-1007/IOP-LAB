// Q-39
/* PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N */

#include <stdio.h>

float factorial(int n)
{
    if (n == 0 || n == 1) // Base case for factorial
        return 1;
    else
        return n * factorial(n - 1); // Recursive factorial calculation
}

int main(int argc, char const *argv[])
{
    int n;         // Number of terms
    float sum = 0; // Initialize sum to 0

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // Loop to calculate sum of series
    {
        sum += (i / factorial(i)); // Add i / i! to sum
    }

    printf("Sum of given series till %d/(%d)! if %f\n", n, n, sum);

    return 0;
}

// End of the program
