#include <stdio.h>
#include <stdlib.h>

const double BASE_RATE = 0.15;
const double EXCESS_RATE = 0.28;
const char* CATEGORIES[] = {0, "Single", "Head of Household", "Married, Joint", "Married, Separate"};
const double INCOME_BREAKS[] = {0, 17850, 23900, 29750, 14875};

void printOptions(void) {
    printf("**********************************************************\n"
           "Enter the number corresponding to the desired tax category: \n"
           "1) %s\t2) %s\n"
           "3) %s\t4) %s\n"
           "5)Quit\n",
           CATEGORIES[1], CATEGORIES[2], CATEGORIES[3], CATEGORIES[4]);
}

int main(void) {
    int opt; /* Option number for the desired tax category. */
    double income = 0;
    double tax = 0;

    /* Select tax category. */
    printOptions();
    while (1 == scanf("%d", &opt)) {
        switch (opt) {
            case 1:
            case 2:
            case 3:
            case 4:
                break;
            case 5:
                goto END;
            default:
                goto NEXT;
        }

        printf("Please input taxable income:\n");
        if (1 == scanf("%lf", &income)) {
            if (income <= 0) {
                tax = 0;
            }
            else if (income <= INCOME_BREAKS[opt]) {
                tax = income * BASE_RATE;
            }
            else {
                tax = INCOME_BREAKS[opt] * BASE_RATE + (income - INCOME_BREAKS[opt]) * EXCESS_RATE;
            }
        }

        printf("tax: %0.2lf\n", tax);

        NEXT:
        printf("**********************************************************\n");
        printOptions();
    }
    END:

    return EXIT_SUCCESS;
}
