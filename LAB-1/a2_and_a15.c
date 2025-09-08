// Lab-1 Q-2 AND Q-15
/*PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL
AND PERCENTAGE

PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Subject marks
    int s1, s2, s3, s4, s5;
    float percentage;

    printf("Enter marks of 1st subject out of 100 \n");
    scanf("%d", &s1);
    printf("Enter marks of 2nd subject out of 100 \n");
    scanf("%d", &s2);
    printf("Enter marks of 3rd subject out of 100 \n");
    scanf("%d", &s3);
    printf("Enter marks of 4th subject out of 100 \n");
    scanf("%d", &s4);
    printf("Enter marks of 5th subject out of 100 \n");
    scanf("%d", &s5);

    // Total marks
    int total = s1 + s2 + s3 + s4 + s5;

    // Percentage calculation
    percentage = total / 5.0;

    printf("You have scored %f per cent of total marks", percentage);
    return 0;
}
// End of the program
