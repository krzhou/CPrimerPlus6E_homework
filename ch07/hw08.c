#include <stdio.h>
#include <stdlib.h>

#define PAY_RATE1 8.75
#define PAY_RATE2 9.33
#define PAY_RATE3 10.00
#define PAY_RATE4 11.20
#define OVERTIME_RATE 1.5
#define HOUR_BREAK 40
#define PAY_BASE HOUR_BREAK * PAY_RATE
#define TAX_RATE1 0.15
#define PAY_BREAK1 300
#define TAX_BASE1 TAX_RATE1 * PAY_BREAK1
#define TAX_RATE2 0.20
#define PAY_BREAK2 150
#define TAX_BASE2 TAX_BASE1 + PAY_BREAK2 * TAX_RATE2
#define TAX_RATE3 0.25

/* Print basic pay rate options. */
void printOptions(void) {
    printf("****************************************\n"
           "Enter the number corresponding to the desired pay rate or action:\n"
           "1) $%0.2f/hr\t2) $%0.2f/hr\n"
           "3) $%0.2f/hr\t4) $%0.2f/hr\n"
           "5) quit\n"
           "****************************************\n",
           PAY_RATE1, PAY_RATE2, PAY_RATE3, PAY_RATE4);
}

int main(void) {
    int opt = 0; /* Option number for pay rate. */
    double hour = 0; /* #hours worked in a week */
    double grossPay = 0;
    double tax = 0;
    double PAY_RATE;

    /* Select basic pay rate. */
    printOptions();
    while (1 == scanf("%d", &opt)) {
        switch (opt) {
            case 1:
                PAY_RATE = PAY_RATE1;
                break;
            case 2:
                PAY_RATE = PAY_RATE2;
                break;
            case 3:
                PAY_RATE = PAY_RATE3;
                break;
            case 4:
                PAY_RATE = PAY_RATE4;
                break;
            case 5:
                return EXIT_SUCCESS;
            default:
                printOptions();
                continue;
        }

        printf("Please input #hours worked in a week:\n");
        if (1 == scanf("%lf", &hour)) {
            /* Compute gross pay. */
            if (0 <= hour && hour <= HOUR_BREAK) {
                grossPay = hour * PAY_RATE;
            }
            else if (hour > HOUR_BREAK) {
                grossPay = PAY_BASE + (hour - HOUR_BREAK) * PAY_RATE * OVERTIME_RATE;
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

        printOptions();
    }

    return EXIT_SUCCESS;
}
