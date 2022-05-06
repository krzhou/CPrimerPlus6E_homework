#include <stdio.h>

int main(void) {
    const char ALPHABET[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t INIT_INDEX = 5;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", ALPHABET[INIT_INDEX - j]);
        }
        printf("\n");
    }
    return 0;
}
