#include <stdio.h>
#include <float.h>

int main(void) {
    float floatVal = 1.0 / 3.0;
    double doubleVal = 1.0 / 3.0;
    printf("float value: %0.6f %0.12f %0.16f\n", floatVal, floatVal, floatVal);
    printf("double value: %0.6f %0.12f %0.16f\n", doubleVal, doubleVal, doubleVal);
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);
    return 0;
}
