#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 16) {
        printf("Membership allowed.\n");
    } else {
        printf("Membership denied. Minimum age required is 16.\n");
    }
    return 0;
}