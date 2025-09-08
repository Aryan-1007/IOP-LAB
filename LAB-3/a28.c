// Lab-3 Q-28
/*PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, num, temp, sum = 0, digit;
    printf("Enter the number of digits in the number: ");
    scanf("%d", &n);
    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}