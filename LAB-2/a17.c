// Lab-2 Q-17
/*PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the value of a,b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the greatest\n", b);
    }
    else
    {
        printf("%d is the greatest\n", c);
    }
    return 0;
}
// End of the program