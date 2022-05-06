#include <stdio.h>
#include <stdlib.h>

#define SIZE 255

int main(void) {
    char line[SIZE];
    int len = 0; /* Length of line. */

    /* Read a line. */
    while (len < SIZE && 1 == scanf("%c", &line[len]) && line[len] != '\n') {
        len++;
    }

    /* Print line in reverse order. */
    while (--len >= 0) {
        printf("%c", line[len]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
