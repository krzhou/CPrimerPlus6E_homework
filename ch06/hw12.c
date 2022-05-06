#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nterm = 0; /* Number of terms. */
    double sum1 = 0;
    double sum2 = 0;

    printf("Input number of terms, stop by <= 0: ");
    fflush(stdout);
    while (1 == scanf("%d", &nterm) && nterm > 0) {
        sum1 = 1;
        sum2 = 1;
        for (int i = 2; i <= nterm; i++) {
            sum1 += 1.0 / i;
            if (1 == i % 2) {
                sum2 += 1.0 / i;
            }
            else {
                sum2 -= 1.0 / i;
            }
        }
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = %f\n", sum1);
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = %f\n", sum2);

        printf("Input number of terms, stop by <= 0: ");
        fflush(stdout);
    }
    return EXIT_SUCCESS;
}
