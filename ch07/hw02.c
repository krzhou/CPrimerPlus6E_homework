#include <stdio.h>
#include <stdlib.h>

#define STOP '#'

int main(void) {
    int count = 0;
    int c;
    while ((c = getchar()) != STOP) {
        count++;
        printf("%c:%d ", c, c);
        if (count % 8 == 0) {
            printf("\n");
        }
    }
    return EXIT_SUCCESS;
}
