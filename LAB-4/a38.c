// Q-38
/* PROGRAM TO PRINT 1,4,9,16,25,………N. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N; // Declare upper limit number

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i * i <= N; i++) // Loop to print squares <= N
    {
        if (i == 1)
            printf("%d", i * i); // Print first square without comma
        else
            printf(",%d", i * i); // Print subsequent squares with comma
    }

    return 0;
}

// End of the program
