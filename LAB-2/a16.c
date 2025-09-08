// Lab-2 Q-16
/*PROGRAM TO READ THREE NOS. AND PRINT MAX*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a, b, c, maximum;
    printf("Enter the value of a,b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    maximum = max(a, c);
    printf("%d is the maximum number of the following\n", maximum);
    return 0;
}
