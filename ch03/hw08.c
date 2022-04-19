#include <stdio.h>

int main(void) {
    double cup;
    double pint;
    double ounce;
    double tablespoon;
    double teaspoon;
    printf("Please input volume in cups: ");
    scanf("%lf", &cup);
    pint = cup / 2;
    ounce = cup * 8;
    tablespoon = 2 * ounce;
    teaspoon = 3 * tablespoon;
    printf("%0.1lf cups equals:\n"
           "%0.1lf pints\n"
           "%0.1lf ounces\n"
           "%0.1lf tablespoons\n"
           "%0.1lf teaspoons\n",
           cup,
           pint,
           ounce,
           tablespoon,
           teaspoon);
    return 0;
}
