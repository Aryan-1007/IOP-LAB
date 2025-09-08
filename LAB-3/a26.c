// Lab-3 Q-26
/*PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int sum_even = 0, sum_odd = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        sum_even += 2 * i;
        sum_odd += 2 * (i + 1) - 1;
    }
    printf("Sum of even numbers between 1 to %d is: %d\n", n, sum_even);
    printf("Sum of odd numbers between 1 to %d is: %d\n", n, sum_odd);
    return 0;
}
