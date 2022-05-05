#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double a;
    double b;
    printf("Input 2 real numbers, stop by q:\n");
    while (2 == scanf("%lf %lf", &a, &b)) {
        printf("(%f - %f) / (%f x %f) = %f\n", a, b, a, b, (a - b) / (a * b));
        printf("Input 2 real numbers, stop by q:\n");
    }
    return EXIT_SUCCESS;
}
