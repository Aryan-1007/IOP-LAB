// Lab-3 Q-28
/* PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, num, temp, sum = 0, digit; // Declare variables for digits count, number, temp, sum, and digit

    printf("Enter the number of digits in the number: ");
    scanf("%d", &n);

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num; // Copy num to temp for processing

    while (temp > 0)
    {
        digit = temp % 10;    // Extract last digit
        sum += pow(digit, n); // Add digit^n to sum
        temp /= 10;           // Remove last digit
    }

    if (sum == num) // Check if sum equals original number
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

// End of the program
