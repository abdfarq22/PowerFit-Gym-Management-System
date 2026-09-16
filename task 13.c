#include <stdio.h>

int main() {
    char payment_done;

    printf("Is payment completed? (Y/N): ");
    scanf(" %c", &payment_done);

    if (payment_done == 'Y' || payment_done == 'y') {
        printf("Membership Confirmed.\n");
    } else {
        printf("Status Pending.\n");
    }
    return 0;
}