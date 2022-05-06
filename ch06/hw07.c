#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char word[64];
    printf("Please input a word: ");
    fflush(stdout);
    if (scanf("%s", word) != 1) {
        return EXIT_FAILURE;
    }
    for (int i = strlen(word) - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
