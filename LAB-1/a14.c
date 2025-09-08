// Lab-1 Q-14
/*PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER, SMALL
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    char a;
    int n;

    printf("Enter a character: ");
    scanf("%c", &a);

    // Convert char to ASCII code
    n = a;

    // Character classification
    if (n >= 65 && n <= 90)
    {
        printf("The entered character is a capital letter.\n");
    }
    else if (n >= 97 && n <= 122)
    {
        printf("The entered character is a small case letter.\n");
    }
    else if (n >= 48 && n <= 57)
    {
        printf("The entered character is a digit.\n");
    }
    else
    {
        printf("The entered character is a special symbol\n");
    }
    return 0;
}
// End of the program
