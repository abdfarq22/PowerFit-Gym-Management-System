#include <stdio.h>

int main() {
    int payment_date;
    float bill = 4000.0; // Base bill example

    printf("Enter the payment date (day of month): ");
    scanf("%d", &payment_date);

    if (payment_date > 10) {
        bill += 300.0;
        printf("Late payment penalty of Rs. 300 applied. Total Bill: Rs. %.2f\n", bill);
    } else {
        printf("On-time payment. Total Bill: Rs. %.2f\n", bill);
    }
    return 0;
}