#include <stdio.h>

int main(void) {
    const double KM_PER_MILE = 1.609;
    const double L_PER_GAL = 3.785;
    double mile = 0; /* Mileage in miles. */
    double gal = 0; /* Gas consumption in gallons. */
    double km; /* Mileage in kilometers. */
    double l; /* Gas consumption in liters. */
    double milePerGal;
    double literPer100km;

    printf("Please input mileage（mile): ");
    scanf("%lf", &mile);
    printf("Please input gas consumption (gal): ");
    scanf("%lf", &gal);

    milePerGal = mile / gal;
    printf("Mile per gallon: %0.1f\n", milePerGal);

    l = gal * L_PER_GAL;
    km = mile * KM_PER_MILE;
    literPer100km = l / (km / 100);
    printf("Liter per 100km: %0.1f\n", literPer100km);

    return 0;
}
