#include <stdio.h>

int main(void) {
    float height;
    char name[40];

    /* Read user's inputs. */
    printf("How high are you in inches? ");
    scanf("%f", &height);
    height /= 12; /* Convert inch to feet. */
    printf("What's your name? ");
    scanf("%s", name);

    /* Print result. */
    printf("%s, you are %0.3f feet tall.\n", name, height);

    return 0;
}
