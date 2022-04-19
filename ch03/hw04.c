#include <stdio.h>

int main(void) {
    float val;
    printf("Enter a floating-point value: ");
    scanf("%f", &val);
    printf("fixed-point notation: %f\n"
           "exponential notation: %e\n"
           "p notation: %a\n",
           val, val, val);
    return 0;
}
