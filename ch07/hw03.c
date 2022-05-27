#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int nEven = 0; /* Number of even numbers. */
    int evenSum = 0; /* Sum of even numbers. */
    int nOdd = 0; /* Number of odd numbers. */
    int oddSum = 0; /* Sum of odd numbers. */

    printf("Please input integers (stop by 0):\n");
    while (1 == scanf("%d", &n) && n != 0) {
        if (n % 2 == 0) {
            nEven++;
            evenSum += n;
        }
        else {
            nOdd++;
            oddSum += n;
        }
    }
    printf("total number of even integer(s): %d\n"
           "average of even integer(s): %d\n"
           "total numebr of odd integer(s): %d\n"
           "average of odd integer(s): %d\n",
           nEven,
           nEven == 0 ? 0 : evenSum / nEven, /* Average is 0 if no even number. */
           nOdd,
           nOdd == 0 ? 0 : oddSum / nOdd); /* Average is 0 if no odd number. */

    return EXIT_SUCCESS;
}
