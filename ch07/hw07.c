#include <stdio.h>
#include <stdlib.h>

#define BASIC_PAY_RATE 10.00
#define OVERTIME_PAY_RATE 1.5 * BASIC_PAY_RATE
#define HOUR_BREAK 40
#define PAY_BASE HOUR_BREAK * BASIC_PAY_RATE
#define TAX_RATE1 0.15
#define PAY_BREAK1 300
#define TAX_BASE1 TAX_RATE1 * PAY_BREAK1
#define TAX_RATE2 0.20
#define PAY_BREAK2 150
#define TAX_BASE2 TAX_BASE1 + PAY_BREAK2 * TAX_RATE2
#define TAX_RATE3 0.25

int main(void) {
    double hour = 0; /* #hours worked in a week */
    double grossPay = 0;
    double tax = 0;

    printf("Please input #hours worked in a week:\n");
    if (1 == scanf("%lf", &hour)) {
        /* Compute gross pay. */
        if (0 <= hour && hour <= HOUR_BREAK) {
            grossPay = hour * BASIC_PAY_RATE;
        }
        else if (hour > HOUR_BREAK) {
            grossPay = PAY_BASE + (hour - HOUR_BREAK) * OVERTIME_PAY_RATE;
        }

        /* Compute tax. */
        if (grossPay <= PAY_BREAK1) {
            tax = grossPay * TAX_RATE1;
        }
        else if (grossPay <= PAY_BREAK1 + PAY_BREAK2) {
            tax = TAX_BASE1 + (grossPay - PAY_BREAK1) * TAX_RATE2;
        }
        else {
            tax = TAX_BASE2 + (grossPay - PAY_BREAK1 - PAY_BREAK2) * TAX_RATE3;
        }

        /* Report. */
        printf("gross pay: %0.2lf\n" "taxes: %0.2lf\n" "net pay: %0.2lf\n", grossPay, tax, grossPay - tax);
    }

    return EXIT_SUCCESS;
}
