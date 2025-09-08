// Lab-3 Q-24
// To calculate Y(x,n)
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, y;
    printf("Enter the value of x and n: ");
    scanf("%d %d", &x, &n);
    if (n == 1)
    {
        y = 1 + x;
        printf("Y(%d,%d) = %d", x, n, y);
    }
    else if (n == 2)
    {
        y = 1 + (x / n);
        printf("Y(%d,%d) = %d", x, n, y);
    }
    else if (n == 3)
    {
        y = x;
        for (int i = 1; i < n; i++)
        {

            y = y * x;
        }
        printf("Y(%d,%d)= %d", x, n, 1 + y);
    }
    else
    {
        y = 1 + n * x;
        printf("Y(%d,%d)= %d", x, n, y);
    }
    return 0;
}
