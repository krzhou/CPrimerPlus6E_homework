#include <stdio.h>

int main(void) {
    int age = 0;
    double sec = 0;
    printf("Please input your age: ");
    scanf("%d", &age);
    sec = age * 3.156e7; // 3.156x10^7 seconds per year
    printf("Your age equals to %e seconds.\n", sec);
    return 0;
}
