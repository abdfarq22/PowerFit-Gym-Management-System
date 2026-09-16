#include <stdio.h>

int main() {
    int choice;
    printf("--- Supplement Menu ---\n");
    printf("1. Protein\n");
    printf("2. Creatine\n");
    printf("3. BCAA\n");
    printf("Select an option (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected: Protein\n");
            break;
        case 2:
            printf("You selected: Creatine\n");
            break;
        case 3:
            printf("You selected: BCAA\n");
            break;
        default:
            printf("Error: Invalid choice!\n");
    }
    return 0;
}