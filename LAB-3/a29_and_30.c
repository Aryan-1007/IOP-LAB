// Lab-3 Q-29 and Q-30
/*PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT
PROGRAM TO REVERSE OF A GIVEN NO*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int num, temp, n, reversed = 0;
    printf("Enter the number of digits in the number: ");
    scanf("%d", &n);
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    if (reversed == num)
        printf("%d is a Palindrome number.\n", reversed);
    else
        printf("%d is not a Palindrome number.\n", reversed);
    return 0;
}
