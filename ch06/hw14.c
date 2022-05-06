#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void printArr(double arr[], int st, int end) {
    for (int i = st; i < end; i++) {
        printf("%f\t", arr[i]);
    }
    printf("\n");
}

int main(void) {
    double arr1[SIZE + 1];
    double arr2[SIZE + 1];

    printf("Input %d real numbers: ", SIZE);
    fflush(stdout);
    arr2[0] = 0;
    for (int i = 1; i <= SIZE; i++) {
        if (1 != scanf("%lf", &arr1[i])) {
            return EXIT_FAILURE;
        }
        arr2[i] = arr2[i - 1] + arr1[i];
    }

    printArr(arr1, 1, SIZE + 1);
    printArr(arr2, 1, SIZE + 1);

    return EXIT_SUCCESS;
}

