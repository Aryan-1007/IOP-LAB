// Lab-1 Q-8 AND Q-11
/*EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS. WRITE A C
PROGRAM TO CONVERT THIS INTO NUMBER OF DAY, HOURS AND MINUTES

PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    int seconds, days, hours, minutes;

    printf("Enter your time in seconds\n");
    scanf("%d", &seconds);

    // Conversion to days, hours, minutes, seconds
    days = seconds / (60 * 60 * 24);
    seconds = seconds % (60 * 60 * 24);

    hours = seconds / (60 * 60);
    seconds = seconds % (60 * 60);

    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("The time in new format is %d days %d hours %d minutes %d seconds", days, hours, minutes, seconds);
    return 0;
}
// End of the program
