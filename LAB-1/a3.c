// Lab-1 Q-3
/* PROGRAM TO CALCULATE GROSS SALARY */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Salary components
    int base, allowances, bonus, ot_pay;

    printf("Enter your base salary,allowances,bonuses and overtime pay\n");
    scanf("%d %d %d %d", &base, &allowances, &bonus, &ot_pay);

    // Gross salary calculation
    int gross_salary;
    gross_salary = base + allowances + bonus + ot_pay;

    printf("Your Gross Salary is %d", gross_salary);
    return 0;
}
// End of the program
