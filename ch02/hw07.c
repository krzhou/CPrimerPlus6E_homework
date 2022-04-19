#include <stdio.h>

void smile(void) {
    printf("Smile!");
}

int main(void) {
    for (int i = 3; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            smile();
        }
        printf("\n");
    }
    return 0;
}
