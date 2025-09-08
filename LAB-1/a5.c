// Lab-1 Q-5
/*PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration
    int v1, v2, v3;

    printf("Enter variable 1 and variable 2 \n");
    scanf("%d %d", &v1, &v2);

    // Swapping values
    v3 = v1;
    v1 = v2;
    v2 = v3;

    printf("After Switching:\n value of variable-1 is %d \n value of variable-2 is %d\n", v1, v2);
    return 0;
}
// End of the program
