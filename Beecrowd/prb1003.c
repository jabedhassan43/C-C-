#include <stdio.h>

int main() {
    double R, A;
    const double PI = 3.14159;

    // Read the input value for the radius
    scanf("%lf", &R);

    // Calculate the area
    A = PI * R * R;

    // Print the result with four decimal places
    printf("A=%.4lf\n", A);

    return 0;
}
