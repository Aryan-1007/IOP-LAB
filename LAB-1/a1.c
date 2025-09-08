// Lab-1 Q-1
/*PROGRAM TO CALCULATE SIMPLE INTEREST.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaration of integer variables
    int base, time;

    // Declaration of float variable
    float rate, si;

    printf("Enter principal ammount,rate of interest and amount of time(in years)\n");
    scanf("%d %f %d", &base, &rate, &time);

    // Simple interest calculation
    si = (base * rate * time) / 100;

    printf("The simple interest after %d years on %d is %f", time, base, si);
    return 0;
}
// End of the program
