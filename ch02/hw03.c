#include <stdio.h>

int main(void) {
    // 把年龄转换成天数
    int age = 28;
    int days = age * 365.24; // 考虑闰年
    printf("My age is %d. It equals %d days.\n", age, days);
    return 0;
}