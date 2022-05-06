#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main(void) {
    int arr[SIZE];
    int i;

    /* Set arr[i] to 2^i. */
    arr[0] = 1; /* 2^0 */
    for (i = 1; i < SIZE; i++) {
        arr[i] = 2 * arr[i - 1];
    }

    /* Print arr[]. */
    i = 0;
    do {
        printf("%d ", arr[i]);
    } while (++i < SIZE);
    printf("\n");

    return EXIT_SUCCESS;
}
