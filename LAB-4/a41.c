// Q-41
/* READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28) */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; // Declare the number

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (int i = 1; i <= n; i++) // Loop to find factors of n
    {
        if (n % i == 0) // Check if i is a factor
        {
            printf("%d ", i); // Print factor
        }
    }

    return 0;
}

// End of the program
