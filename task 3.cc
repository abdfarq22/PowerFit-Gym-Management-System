#include <stdio.h>

int main() {
    int months;
    float total_price;
    float monthly_rate = 3000.0; // Example base rate per month

    printf("Enter number of months registered: ");
    scanf("%d", &months);

    total_price = months * monthly_rate;

    if (months >= 6) {
        total_price -= total_price * 0.10; // Apply 10% discount
        printf("10%% discount applied! Total price: Rs. %.2f\n", total_price);
    } else {
        printf("Normal price applied. Total price: Rs. %.2f\n", total_price);
    }
    return 0;
}