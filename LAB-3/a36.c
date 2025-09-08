// Q-36
/* PROGRAM TO PRINT 1,3,5,7,9………N */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; // Declare the upper limit number

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The odd numbers till %d are as follows;\n", n);

    for (int i = 1; 2 * i - 1 <= n; i++) // Loop to generate odd numbers <= n
    {
        if (i == 1)
        {
            printf("%d", 2 * i - 1); // Print first odd number without comma
        }
        else
        {
            printf(",%d", 2 * i - 1); // Print subsequent odd numbers with comma
        }
    }

    return 0;
}

// End of the program
