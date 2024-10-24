#include <stdio.h>

int main() {
    int M, N;

    while(1)
    {
        // Read a pair of integers M and N
        scanf("%d %d", &M, &N);

        // Check if any value is zero or negative
        if (M <= 0 || N <= 0) {
            break;
        }

        // Determine the smaller and larger number
        int min = M < N ? M : N;
        int max = M > N ? M : N;

        int sum = 0;

        // Print the sequence and calculate the sum
        for (int i = min; i <= max; i++) {
            printf("%d ", i);
            sum += i;
        }

        // Print the sum of the sequence
        printf("Sum=%d\n", sum);
    }

    return 0;
}
