#include <stdio.h>

int main(void) {
    double height_inch = 0;
    double height_cm = 0;
    printf("Please input your height in inches: ");
    scanf("%lf", &height_inch);
    height_cm = height_inch * 2.54; // Convert inch to cm.
    printf("Your height is %0.1lf cm.\n", height_cm);
    return 0;
}
