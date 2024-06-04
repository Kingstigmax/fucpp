#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Enter %d numbers:\n", size);

    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("You entered the following numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}