#include <stdio.h>

int main() {
    char choose_diet;
    float bill = 3000.0; // Base bill example

    printf("Do you want a diet consultation? (Y/N): ");
    scanf(" %c", &choose_diet);

    if (choose_diet == 'Y' || choose_diet == 'y') {
        bill += 1000.0;
        printf("Diet consultation added (Rs. 1000). Total Bill: Rs. %.2f\n", bill);
    } else {
        printf("No diet consultation added. Total Bill: Rs. %.2f\n", bill);
    }
    return 0;
}