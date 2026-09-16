#include <stdio.h>

int main() {
    char is_corporate;
    float bill = 5000.0; // Base bill example

    printf("Are you a corporate employee? (Y/N): ");
    scanf(" %c", &is_corporate);

    if (is_corporate == 'Y' || is_corporate == 'y') {
        bill -= bill * 0.20; // 20% discount
        printf("20%% corporate discount applied! Total Bill: Rs. %.2f\n", bill);
    } else {
        printf("No discount applied. Total Bill: Rs. %.2f\n", bill);
    }
    return 0;
}