#include <stdio.h>

int main() {
    char trainer_option;
    float bill = 5000.0; // Base membership fee example
    float trainer_fee = 2000.0;

    printf("Do you want a personal trainer? (Y/N): ");
    scanf(" %c", &trainer_option);

    if (trainer_option == 'Y' || trainer_option == 'y') {
        bill += trainer_fee;
        printf("Personal trainer added. Updated Bill: Rs. %.2f\n", bill);
    } else {
        printf("No trainer added. Bill: Rs. %.2f\n", bill);
    }
    return 0;
}