#include <stdio.h>

int main(void) {
    const int MIN_PER_HOUR = 60;
    int input = 0; /* #minutes input by users */
    int nhour = 0; /* #hours after conversion. */
    int nmin = 0; /* #minutes after conversion.  */

    printf("Please input time in minutes (stop by 0 or negative value): ");
    scanf("%d", &input);
    while (input > 0) {
        nhour = input / MIN_PER_HOUR;
        nmin = input % MIN_PER_HOUR;
        printf("%d hours %d minutes\n", nhour, nmin);
        printf("Please input time in minutes (input 0 or negative value to stop):\n");
        scanf("%d", &input);
    }

    return 0;
}
