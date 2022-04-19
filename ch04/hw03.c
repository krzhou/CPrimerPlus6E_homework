#include <stdio.h>

int main(void) {
    float val;
    printf("Please input a floating-point number: ");
    scanf("%f", &val);
    printf("The input is %0.1f or %0.1e.\n", val, val);
    printf("The input is %+0.3f or %0.3E.\n", val, val);
    return 0;
}
