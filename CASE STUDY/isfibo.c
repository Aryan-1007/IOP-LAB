#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, flag = 0;
        scanf("%d", &n);
        for (int j = 0; j <= n; j++)
        {
            if (fib(j + 1) == n)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("IsFibo\n");
        else
            printf("IsNotFibo\n");
    }
    return 0;
}
