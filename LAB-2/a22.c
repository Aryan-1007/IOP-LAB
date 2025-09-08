// Lab-2 Q-22
/*PROGRAM TO CALCULATE FACTORIAL OF A NO.*/
#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number whose factorial is to be calculated: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
