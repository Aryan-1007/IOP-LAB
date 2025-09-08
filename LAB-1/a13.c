// Lab-1 Q-13
/* PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    // Even or odd check
    if (n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);

    return 0;
}
// End of the program
