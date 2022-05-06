#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double balance = 100.0; /* 10k dollars */
    const double RATE = 0.08; /* annual interest rate */
    const double WITHDRAW = 10.0; /* 10k dollar */
    size_t nyear = 0;

    while (balance > 0) {
        balance += balance * RATE;
        balance -= WITHDRAW;
        nyear++;
    }
    printf("After %zd years, Chuckie has withdrawn all the money.\n", nyear);

    return EXIT_SUCCESS;
}
