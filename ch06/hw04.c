#include <stdio.h>

int main(void) {
    char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int curr_index = 0;
    for (int row = 0; row < 6; row++) {
        for (int col = 0; col <= row; col++, curr_index++) {
            printf("%c", ALPHABET[curr_index]);
        }
        printf("\n");
    }
    return 0;
}
