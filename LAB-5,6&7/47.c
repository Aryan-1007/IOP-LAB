#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c", a++);
        }
        printf("\n");
    }
    return 0;
}
