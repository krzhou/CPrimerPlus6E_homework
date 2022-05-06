#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int first;
    int last;

    /* Read user input. */
    printf("Start from: ");
    fflush(stdout);
    if (scanf("%d", &first) != 1) {
        return EXIT_FAILURE;
    }
    printf("End with: ");
    fflush(stdout);
    if (scanf("%d", &last) != 1) {
        return EXIT_FAILURE;
    }

    /* Print table. */
    for (int i = first; i <= last; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return EXIT_SUCCESS;
}