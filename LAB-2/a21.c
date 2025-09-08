// Lab-2 Q-21
/*PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC
OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2;
    char a;
    printf("Enter two numbers:\n");
    scanf("%f %f", &n1, &n2);
    printf("Enter a character:\n A means addition\n S means subtraction\n M means multiplication\n D means division\n");
    scanf(" %c", &a);
    switch (a)
    {
    case 'A':
        printf("The addition of two numbers is %f\n", n1 + n2);
        break;
    case 'S':
        printf("The subtraction of two numbers is %f\n", n1 - n2);
        break;
    case 'M':
        printf("The multiplication of two numbers is %f\n", n1 * n2);
        break;
    case 'D':
        if (n2 != 0)
            printf("The division of two numbers is %f\n", n1 / n2);
        else
            printf("Division by zero is not possible\n");
        break;

    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}