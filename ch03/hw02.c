#include <stdio.h>

int main(void) {
    int c;
    printf("Please input an ASCII code between 0 and 127:\n");
    if (scanf("%d", &c) == 1 && 0 <= c && c <= 127) {
        printf("%c\n", c);
    }
    return 0;
}
