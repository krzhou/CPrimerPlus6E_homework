#include <stdio.h>
#define STOP '#'

int main(void) {
    char c;
    int nSpace = 0;
    int nNewline = 0;
    int nOthers = 0;

    printf("Please input characters (ends with '#')\n");
    while ((c = getchar()) != STOP) {
        if (c == ' ') {
            nSpace++;
        }
        else if (c == '\n') {
            nNewline++;
        }
        else {
            nOthers++;
        }
    }
    printf("%d %s, %d newline %s and %d other %s are read.\n",
           nSpace,
           nSpace > 1 ? "spaces" : "space",
           nNewline, nNewline > 1 ? "characters" : "character",
           nOthers,
           nOthers > 1 ? "characters" : "character");
    return 0;
}