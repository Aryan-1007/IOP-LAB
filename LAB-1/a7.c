// Lab-1 Q-7
/*PROGRAM TO CALCULATE AREA OF A TRIANGLE.*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // Variable declaration
    float s1, s2, s3, semi, x, area;

    printf("Enter the sides of triangle \n");
    scanf("%f %f %f", &s1, &s2, &s3);

    // Semi-perimeter calculation
    semi = (s1 + s2 + s3) / 2;

    // Area calculation using Heron's formula
    area = sqrt(semi * (semi - s1) * (semi - s2) * (semi - s3));

    printf("Area of triangle is %f", area);
    return 0;
}
// End of the program
