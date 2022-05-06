#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const double PRINCIPAL = 100; /* dollars */
    double daphneBalance = 100; /* dollars */
    const double DAPHNE_RATE = 0.1; /* simple interest rate */
    double deirdreBalance = 100; /* dollars */
    const double DEIRDRE_RATE = 0.05; /* compound interest rate */
    size_t nyear = 0;

    while (daphneBalance >= deirdreBalance) {
        daphneBalance += PRINCIPAL * DAPHNE_RATE;
        deirdreBalance += deirdreBalance * DEIRDRE_RATE;
        nyear++;
    }
    printf("After %zd years, Deidre earns more money than Daphne.\n", nyear);
    printf("Daphne's Balance: %f\n", daphneBalance);
    printf("Deidre's Balance: %f\n", deirdreBalance);

    return EXIT_SUCCESS;
}
