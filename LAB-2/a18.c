// Lab-2 Q-18
/*PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :)
OPERATOR.
*/

#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main(int argc, char const *argv[])
{

    int a, b, c, maximum;
    printf("Enter the value of a,b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    maximum = max(a, max(b, c));
    printf("%d is the maximum number of the following\n", maximum);
    return 0;
}
