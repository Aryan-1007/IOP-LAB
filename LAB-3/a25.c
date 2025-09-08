// Lab-3 Q-25
/*PROGRAM TO PRINT TABLE OF ANY NO*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number to print its table: ");
    scanf("%d", &n);
    printf("Table of %d is:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
