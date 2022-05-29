#include <stdio.h>
#include <stdlib.h>

/* Check if `n` is prime. */
int isPrime(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n;

    printf("Please input a positive integer:\n");
    if (1 != scanf("%d", &n) && n > 0) {
        return EXIT_FAILURE;
    }

    printf("Prime number(s) <= %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return EXIT_SUCCESS;
}
