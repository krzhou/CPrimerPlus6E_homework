#include <stdio.h>

int main(void) {
    int first = 0;
    int last = 0;

    printf("Please input an initial int value: ");
    scanf("%d", &first);
    last = first + 10;
    for (int i = first; i <= last; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
