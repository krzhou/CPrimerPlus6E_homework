#include <stdio.h>

int main(void) {
    double INCH_PER_CM = 0.39370079;
    int INCH_PER_FEET = 12;
    double height_cm = 0; /* Height in cm. */
    int nfeet = 0; /* Height in feet after conversion . */
    double ninch = 0; /* Height in inches left after conversion. */

    printf("Enter a height in centimeters (<= 0 to quit): ");
    scanf("%lf", &height_cm);
    while (height_cm > 0) {
        ninch = height_cm * INCH_PER_CM;
        nfeet = ninch / INCH_PER_FEET;
        ninch -= nfeet * INCH_PER_FEET;
        printf("%0.1f cm = %d feet, %0.1f inches\n", height_cm, nfeet, ninch);
        printf("Enter a height in centimeters (<= 0 to quit): ");
        scanf("%lf", &height_cm);
    }
    printf("bye\n");

    return 0;
}
