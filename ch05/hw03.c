#include <stdio.h>

int main(void) {
    const DAYS_PER_WEEK = 7;
    int input = 0; /* #days input by a user. */
    int nweek = 0; /* #weeks after conversion. */
    int ndays = 0; /* #days left after conversion. */

    printf("Please input number of days (input a value <= 0 to stop): ");
    scanf("%d", &input);
    while (input > 0) {
        nweek = input / DAYS_PER_WEEK;
        ndays = input % DAYS_PER_WEEK;
        printf("%d days are %d weeks, %d days.\n", input, nweek, ndays);
        printf("Please input number of days (input a value <= 0 to stop): ");
        scanf("%d", &input);
    }

    return 0;
}
