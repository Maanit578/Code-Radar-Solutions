#include <stdio.h>

int main() {
    int n;

    // Input the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row to create the pyramid
    for (int i = 1; i <= n; i++) {
        // Print leading spaces to center the numbers
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Print numbers starting from 1 up to i
        }

        // Move to the next line after printing numbers for each row
        printf("\n");
    }

    return 0;
}

