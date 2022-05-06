#include <stdio.h>
#include <stdlib.h>

int sumSquare(int lowerLimit, int upperLimit) {
    int sum = 0;
    for (int i = lowerLimit; i <= upperLimit; i++) {
        sum += i * i;
    }
    return sum;
}

int main(void) {
    int lowerLimit;
    int upperLimit;

    printf("Enter lower and upper integer limits: ");
    fflush(stdout);
    while (2 == scanf("%d %d", &lowerLimit, &upperLimit) &&
           lowerLimit < upperLimit) {
        printf("The sums of the squares from %d to %d is %d\n",
               lowerLimit * lowerLimit,
               upperLimit * upperLimit,
               sumSquare(lowerLimit, upperLimit));
        printf("Enter next set of limits: ");
        fflush(stdout);
    }
    printf("Done\n");

    return EXIT_SUCCESS;
}
