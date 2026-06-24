#include <stdio.h>

int main() {
    int N, boxes;

    printf("Enter the number of items: ");
    scanf("%d", &N);

    boxes = (N + 11) / 12;  // Ceiling division

    printf("Minimum number of boxes required = %d\n", boxes);

    return 0;
}