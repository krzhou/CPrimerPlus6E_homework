#include <stdio.h>

int main(void) {
    double volume = 0; // volume of water in quarts
    double count = 0; // number of water molecules in the given volume
    printf("Please input volume of water in quarts: ");
    scanf("%lf", &volume);
    count = volume * 950 / 3e-23;
    printf("There are %e water molecules in %0.1f quarts of water.\n",
           count,
           volume);
    return 0;
}
