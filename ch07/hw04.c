#include <stdio.h>
#include <stdlib.h>

#define STOP '#'
#define PERIOD '.'
#define EXCLAMATION '!'

int main(void) {
    int count = 0; /* Number of substitutions. */
    int c;

    while ((c = getchar()) != STOP) {
        if (c == PERIOD) {
            printf("%c", EXCLAMATION);
            count++;
        }
        else if (c == EXCLAMATION) {
            printf("%c%c", EXCLAMATION, EXCLAMATION);
            count++;
        }
        else {
            printf("%c", c);
        }
    }
    printf("It has made %d %s.\n", count, count > 1 ? "substitutions" : "substitution");
    return EXIT_SUCCESS;
}
