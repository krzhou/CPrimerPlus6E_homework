#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main(void) {
    int nums[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (1 != scanf("%d", &nums[i])) {
            EXIT_FAILURE;
        }
    }
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
