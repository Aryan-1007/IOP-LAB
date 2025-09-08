// Lab-3 Q-34
/*PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)*/

#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}
