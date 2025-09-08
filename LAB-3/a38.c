// Q-38
/*PROGRAM TO PRINT 1,4,9,16,25,………N.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i * i <= N; i++)
    {
        if (i == 1)
            printf("%d", i * i);
        else
            printf(",%d", i * i);
    }
    return 0;
}
