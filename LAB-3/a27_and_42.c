// Lab-3 Q-27
/* PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; // Declare input number
    printf("Enter a number: ");
    scanf("%d", &n);

    int flag = 0; // Flag to mark if number is not prime

    for (int i = 2; i <= n / 2; i++) // Check divisibility from 2 to n/2
    {
        if (n % i == 0) // If divisible, not prime
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && n > 1) // If no divisor found and n>1, prime
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}

// End of the program
