#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char username[101];
    bool char_present[26] = {false}; // To track if a character has appeared
    int distinct_count = 0;

    // Read the input username
    scanf("%s", username);

    // Determine distinct characters
    for (int i = 0; username[i] != '\0'; i++) {
        int index = username[i] - 'a'; // Find the position of the character in the alphabet
        if (!char_present[index]) {
            char_present[index] = true;
            distinct_count++;
        }
    }

    // Determine gender based on the count of distinct characters
    if (distinct_count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
