#include <stdio.h>

int main() {
    int num, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;              // Get last digit
        reverse = reverse * 10 + rem; // Add digit to reversed number
        num = num / 10;             // Remove last digit
    }

    printf("Reversed number = %d", reverse);

    return 0;
}