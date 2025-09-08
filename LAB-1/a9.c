// Lab-1 Q-9
/*PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    int hrs, min, sec;

    printf("Enter time in hours:mintues:seconds format\n");
    scanf("%d %d %d", &hrs, &min, &sec);

    // Conversion to total seconds and output
    printf("Time in seconds = %d\n", hrs * 3600 + min * 60 + sec);
    return 0;
}
// End of the program
