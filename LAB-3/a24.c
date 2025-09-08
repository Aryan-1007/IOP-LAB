// Lab-3 Q-24
// To calculate Y(x,n)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, y; // Declare variables for inputs and result

    printf("Enter the value of x and n: ");
    scanf("%d %d", &x, &n);

    if (n == 1)
    {
        y = 1 + x; // Y = 1 + x for n=1
        printf("Y(%d,%d) = %d", x, n, y);
    }
    else if (n == 2)
    {
        y = 1 + (x / n); // Y = 1 + x/2 for n=2 (integer division)
        printf("Y(%d,%d) = %d", x, n, y);
    }
    else if (n == 3)
    {
        y = x;                      // Initialize y to x
        for (int i = 1; i < n; i++) // Calculate x^n (x cubed)
        {
            y = y * x;
        }
        printf("Y(%d,%d)= %d", x, n, 1 + y);
    }
    else
    {
        y = 1 + n * x; // Y = 1 + n*x for other n
        printf("Y(%d,%d)= %d", x, n, y);
    }
    return 0;
}

// End of the program
