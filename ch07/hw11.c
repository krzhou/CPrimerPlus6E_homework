#include <stdio.h>
#include <stdlib.h>

/* item settings */
#define NITEMS 3
const char* NAMES[] = {"artichokes", "beet", "carrot"};
const double PRICES[] = {2.05, 1.15, 1.09};

/* print format for items */
#define NAME_WIDTH 10
#define PRICE_WIDTH 10
#define WEIGHT_WIDTH 10
#define COST_WIDTH 10

/* discount settings */
#define DISCOUNT 0.05
#define CHARGE_BREAK 100

/* shipping cost settings */
#define WEIGHT_BREAK1 5
#define SHIPPING_BASE1 6.50
#define WEIGHT_BREAK2 20
#define SHIPPING_BASE2 14
#define SHIPPING_RATE 0.50

void printOptions(void) {
    printf("#  %-*s \t %-*s\n", NAME_WIDTH, "items", PRICE_WIDTH, "price($/lb)");
    for (int i = 0; i < NITEMS; i++) {
        printf("%c) %-*s \t %*.2lf\n", 'a' + i, NAME_WIDTH, NAMES[i], PRICE_WIDTH, PRICES[i]);
    }
    printf("q) quit\n");
    printf("Order with the option of a desired item and #pounds.\n"
           "Exit ordering process by 'q'.\n");
}

int main(void) {
    char opt[8];
    double weight = 0;
    double weights[NITEMS];
    double totalWeight = 0;
    double costs[NITEMS];
    double totalCost = 0;
    double discount = 0;
    double shippingCost = 0;

    /* Add items to the order. */
    printOptions();
    while (1 == scanf("%s", opt)) {
        switch (opt[0]) {
            case 'a':
            case 'b':
            case 'c':
                if (1 == scanf("%lf", &weight)) {
                    weights[opt[0] - 'a'] += weight;
                    totalWeight += weight;
                }
                break;
            case 'q':
                goto endOrdering;
        }
        printOptions();
    }
    endOrdering:

    /* Compute order cost without discount or shipping cost. */
    for (int i = 0; i < NITEMS; i++) {
        costs[i] = PRICES[i] * weights[i];
        totalCost += costs[i];
    }

    /* Compute discount. */
    if (totalCost >= CHARGE_BREAK) {
        discount = DISCOUNT * totalCost;
    }

    /* Compute shipping cost. */
    if (totalWeight <= 0) {
        shippingCost = 0;
    }
    else if (totalWeight <= WEIGHT_BREAK1) {
        shippingCost = SHIPPING_BASE1;
    }
    else if (totalWeight <= WEIGHT_BREAK2) {
        shippingCost = SHIPPING_BASE2;
    }
    else {
        shippingCost = SHIPPING_BASE2 + (totalWeight - WEIGHT_BREAK2) * SHIPPING_RATE;
    }

    /* Report purchase info. */
    printf("**********************************************************************\n");
    printf("%-*s \t %-*s \t %-*s \t %-*s\n",
           NAME_WIDTH, "items",
           PRICE_WIDTH, "price($/lb)",
           WEIGHT_WIDTH, "quantity(lb)",
           COST_WIDTH, "subtotal($)");
    for (int i = 0; i < NITEMS; i++) {
        printf("%-*s \t %*.2lf \t %*.2lf \t %*.2lf\n", NAME_WIDTH, NAMES[i], PRICE_WIDTH, PRICES[i], WEIGHT_WIDTH, weights[i], COST_WIDTH, costs[i]);
    }
    printf("**********************************************************************\n");
    printf("total costs: \t $%*.2lf\n"
           "discount: \t $%*.2lf\n"
           "shipping cost: \t $%*.2lf\n"
           "grand total: \t $%*.2lf\n",
           COST_WIDTH, totalCost,
           COST_WIDTH, discount,
           COST_WIDTH, shippingCost,
           COST_WIDTH, totalCost - discount + shippingCost);
    return EXIT_SUCCESS;
}
