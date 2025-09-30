#include <stdio.h>

int main()
{
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units >= 0 && units <= 200)
    {
        bill = units * 0.50;
    }
    else if (units >= 201 && units <= 400)
    {
        bill = 100 + (units - 200) * 0.65;
    }
    else if (units >= 401 && units <= 600)
    {
        bill = 230 + (units - 400) * 0.80;
    }
    else if (units > 600)
    {
        bill = 425 + (units - 600) * 1.25;
    }
    else
    {
        printf("Invalid unit input.\n");
        return 0;
    }

    printf("The total amount to be paid is: Rs. %f\n", bill);

    return 0;
}
