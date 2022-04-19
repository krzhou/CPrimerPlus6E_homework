#include <stdio.h>
#include <limits.h>

int main(void) {
    // 整数上溢
    int int_max = INT_MAX;
    short short_max = SHRT_MAX;
    long long_max = LONG_MAX;
    unsigned uint_max = UINT_MAX;
    unsigned short ushort_max = USHRT_MAX;
    unsigned long ulong_max = ULONG_MAX;
    printf("INT_MAX = %d, INT_MAX + 1 = %d\n"
           "SHRT_MAX = %hd, SHRT_MAX + 1 = %hd\n"
           "LONG_MAX = %ld, LONG_MAX + 1 = %ld\n"
           "UINT_MAX = %u, UINT_MAX + 1 = %u\n"
           "USHRT_MAX = %hu, USHRT_MAX + 1 = %hu\n"
           "ULONG_MAX = %lu, ULONG_MAX + 1 = %lu\n",
            int_max, ++int_max,
            short_max, ++short_max,
            long_max, ++long_max,
            uint_max, ++uint_max,
            ushort_max, ++ushort_max,
            ulong_max, ++ulong_max);

    // 浮点数上溢和下溢
    float f1 = 1.234567e37F;
    float f2 = f1 * 1e2F;
    float f3 = f1 / 1e100;
    printf("f = %e, overflow by f * 1e2 = %e, underflow by f / 1e100 = %e\n",
           f1, f2, f3);
    double d1 = 1.234567e37;
    double d2 = d1 * 1e300;
    double d3 = d1 / 1e300 / 1e300;
    printf("d = %e, overflow by d * 1e2 = %e, underflow by d / 1e100 = %e\n",
           d1, d2, d3);

    return 0;
}