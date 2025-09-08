// Lab-2 Q-23
/* PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER
FILE(<MATH.H>). */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int base, power, n; // Declare variables for base, power, and temp copy

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    n = base; // Store original base value

    if (power == 0)
    {
        printf("1");
        return 0;
    }
    else
    {
        if (power > 0)
        {
            for (int i = 1; i < power; i++) // Multiply base by original base (power-1) times
            {
                base = base * n;
            }
            printf("The value of (base)^(power) is %d", base);
        }
        else
        {
            for (int i = -1; i > power; i--) // Multiply base for negative powers
            {
                base = base * n;
            }
            printf("The value of (base)^(power) is 1/%d", base);
        }
    }

    return 0;
}

// End of the program
