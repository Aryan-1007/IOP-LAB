#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("0");
        }
        printf("1");
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
