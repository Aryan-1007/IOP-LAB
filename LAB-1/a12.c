// Lab-1 Q-12
/*PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    char input;
    int n;

    printf("Enter a character\n");
    scanf("%c", &input);

    // ASCII conversion
    n = input;

    printf("The ASCII code of %c is %d\n", input, n);

    return 0;
}
// End of the program
