#include <stdio.h>

double cube(double n) {
    return n * n * n;
}

int main(void) {
    double n = 0;

    printf("Enter n to compute its cube: ");
    scanf("%lf", &n);
    printf("(%f)^3 = %f\n", n, cube(n));
    return 0;
}
