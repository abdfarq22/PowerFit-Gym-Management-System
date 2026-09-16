#include <stdio.h>

int main() {
    int months;
    float plan_rate, bill;

    printf("Enter number of months: ");
    scanf("%d", &months);
    printf("Enter monthly plan rate (Rs.): ");
    scanf("%f", &plan_rate);

    // Bill = (months * plan rate) + 10% tax
    bill = (months * plan_rate) * 1.10;

    printf("Total Bill (including 10%% tax): Rs. %.2f\n", bill);
    return 0;
}