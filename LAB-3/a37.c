// Q-37
/* PROGRAM TO PRINT 2,4,6,8,10,12………N */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; // Declare upper limit number

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Even numbers till %d are as follows:\n", n);

    for (int i = 1; 2 * i <= n; i++) // Loop to generate even numbers <= n
    {
        if (i == 1)
            printf("%d", 2 * i); // Print first even number without comma
        else
            printf(",%d", 2 * i); // Print subsequent even numbers with comma
    }

    return 0;
}

// End of the program
