// Lab-1 Q-4
/*PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    float farenhiet, celcius;

    printf("Enter temperature in farenheit\n");
    scanf("%f", &farenhiet);

    // Conversion calculation
    celcius = ((5.0 / 9.0) * (farenhiet - 32));

    printf("The temperature in centigrade is %f", celcius);
    return 0;
}
// End of the program
