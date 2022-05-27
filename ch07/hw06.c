#include <stdio.h>
#include <stdlib.h>

#define STOP '#'

int main(void) {
    int count = 0; /* Number of substitutions. */
    int c;
    int prev = 0;

    while ((c = getchar()) != STOP) {
        if ('e' == prev && 'i' == c) {
            count++;
        }
        prev = c;
    }
    printf("Sequence ei occurs %d %s.\n", count, count > 1 ? "times" : "time");
    return EXIT_SUCCESS;
}
