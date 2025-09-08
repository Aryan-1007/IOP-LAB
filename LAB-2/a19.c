// Lab-2 Q-19
/*PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE
LETTER OR NOT USING CONDATIONAL OPERATOR.*/
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("Enter the character:\n");
    scanf("%c", &a);
    int n = a;
    bool flag;
    flag = (n >= 97 && n <= 122) ? 1 : 0;
    if (flag)
    {
        printf("The character is a lowercase letter\n");
    }
    else
    {
        printf("The character is not a lowercase letter\n");
    }
    return 0;
}
