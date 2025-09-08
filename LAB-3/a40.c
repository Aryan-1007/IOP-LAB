// Q-40
/*READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
LIST OF NUMBERS READ*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 0;; i++)
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        sum += n;
    }
    printf("Sum of numbers is: %d\n", sum);
    return 0;
}
