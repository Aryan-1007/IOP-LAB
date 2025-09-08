// Lab-1 Q-6
/*PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.*/
#include <stdio.h>

int main()
{
    // Variable declaration
    int v1, v2;

    printf("Enter the value of variable-1 and variable-2:\n");
    scanf("%d %d", &v1, &v2);

    // Swapping without third variable
    v1 = v1 + v2;
    v2 = v1 - v2;
    v1 = v1 - v2;

    printf("After swapping:\n value of variable-1 is %d \n value of variable-2 is %d\n", v1, v2);

    return 0;
}
// End of the program
