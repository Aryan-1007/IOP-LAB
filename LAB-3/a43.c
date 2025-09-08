// Q-43
/* Amount of commission of a sales person */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float sales, commission; // Declare variables for sales and commission

    printf("Enter sales amount in rupees: ");
    scanf("%f", &sales);

    if (sales <= 500) // Commission for sales up to 500
    {
        commission = sales * 0.05;
    }
    else if (sales > 500 && sales <= 2000) // Commission for sales between 501 and 2000
    {
        commission = 35 + ((sales - 500) * 0.1);
    }
    else if (sales > 2000 && sales <= 5000) // Commission for sales between 2001 and 5000
    {
        commission = 185 + ((sales - 2000) * 0.12);
    }
    else // Commission for sales above 5000
    {
        commission = sales * 0.125;
    }

    printf("Commission is %f rupees.\n", commission);

    return 0;
}

// End of the program
