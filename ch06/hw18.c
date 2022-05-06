#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int DUNBAR_NUM = 150;
    int nfriends = 5;
    int nweek = 0;

    printf("On week %d, Dr. Rabnud has %d friends.\n", nweek, nfriends);
    while (nfriends <= DUNBAR_NUM) {
        nweek++;
        nfriends -= nweek;
        nfriends *= 2;
        printf("On week %d, Dr. Rabnud has %d friends.\n", nweek, nfriends);
    }
    printf("It has exceeded Dunbar's number.\n");

    return EXIT_SUCCESS;
}
