#include <stdio.h>

int main() {
    // Declare the variables for the integers
    int A, B, C, D;
    int difference;

    // Read the integer values
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    // Calculate the difference of products
    difference = (A * B) - (C * D);

    // Print the result with the specified format
    printf("DIFERENCA = %d\n", difference);

    return 0;
}
