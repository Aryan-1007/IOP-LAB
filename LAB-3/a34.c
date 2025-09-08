// Lab-3 Q-34
/* PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…) */

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2) // Base cases: fib(1)=0, fib(2)=1
        return n - 1;
    return (fibonacci(n - 1) + fibonacci(n - 2)); // Recursive call
}

int main(int argc, char const *argv[])
{
    int n; // Number of terms in Fibonacci series

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) // Loop to print Fibonacci terms
        printf("%d ", fibonacci(i));

    return 0;
}

// End of the program
