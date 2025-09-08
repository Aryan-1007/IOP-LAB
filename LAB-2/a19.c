// Lab-2 Q-19
/* PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE
LETTER OR NOT USING CONDITIONAL OPERATOR. */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char a; // Declare character variable
    printf("Enter the character:\n");
    scanf("%c", &a);

    int n = a; // Convert character to ASCII value
    bool flag; // Declare boolean flag

    flag = (n >= 97 && n <= 122) ? 1 : 0; // Check if character is lowercase

    if (flag)
    {
        printf("The character is a lowercase letter\n");
    }
    else
    {
        printf("The character is not a lowercase letter\n");
    }

    return 0;
}

// End of the program
