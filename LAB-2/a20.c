// Lab-2 Q-20
/*  PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2;
    int a;
    printf("Enter two numbers:\n");
    scanf("%f %f", &n1, &n2);
    printf("Enter a integer:\n 1 means addition\n 2 means subtraction\n 3 means multiplication\n 4 means division\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("The addition of two numbers is %f\n", n1 + n2);
        break;
    case 2:
        printf("The subtraction of two numbers is %f\n", n1 - n2);
        break;
    case 3:
        printf("The multiplication of two numbers is %f\n", n1 * n2);
        break;
    case 4:
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
