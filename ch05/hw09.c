#include <stdio.h>

void temperatures(double temp_f) {
    const double F_TO_C_SCALE = 5.0 / 9.0;
    const double F_TO_C_ZERO_POINT = 32.0;
    const double C_TO_K_BASE = 273.16;
    double temp_c = F_TO_C_SCALE * (temp_f - F_TO_C_ZERO_POINT);
    double temp_k = temp_c + C_TO_K_BASE;
    printf("%.2f F = %.2f C = %.2f K\n", temp_f, temp_c, temp_k);
}

int main(void) {
    double temp_f = 0; /* user input of temperature in Fahrenheit */
    printf("Enter temperature in Fahrenheit: ");
    while (scanf("%lf", &temp_f) == 1) {
        temperatures(temp_f);
        printf("Enter temperature in Fahrenheit: ");
    }
    return 0;
}
