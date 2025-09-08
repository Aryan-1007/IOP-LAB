// Lab-1 Q-10
/*WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
FORMULA.
 CM = M/2 + P/2 + C/2 + E
WHERE CM = Cut off mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    int m, p, c, e, cm;

    printf("Enter marks of physics,chemistry and maths out of 200\n");
    scanf("%d %d %d", &p, &c, &m);
    printf("Enter marks of entrance examination out of 100\n");
    scanf("%d", &e);

    // Cutoff marks calculation
    cm = ((p + c + m) / 2) + e;

    printf("The total cutoff marks for a student is %d\n", cm);
    return 0;
}
// End of program
