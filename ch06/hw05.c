#include <stdio.h>

int main(void) {
    const size_t SIZE = 26;
    const char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char userInput;
    size_t userInputIndex;

    /* Get user input. */
    printf("Please input a CAPITALIZED letter:");
    if (scanf("%c", &userInput) != 1) {
        /* Invalid input. */
        return 0;
    }

    /* Get index of user input. */
    userInputIndex = 0;
    while (userInput != ALPHABET[userInputIndex]) {
        userInputIndex++;
    }
    if (userInputIndex >= SIZE) {
        /* Not capitalized letter. */
        return 0;
    }

    /* Print pattern. */
    for (int row = 0; row <= userInputIndex; row++) {
        for (int col = 0; col < userInputIndex - row; col++) {
            printf(" ");
        }
        for (int col = 0; col <= row; col++) {
           printf("%c", ALPHABET[col]);
        }
        for (int col = row - 1; col >= 0; col--) {
            printf("%c", ALPHABET[col]);
        }
        printf("\n");
    }

    return 0;
}
