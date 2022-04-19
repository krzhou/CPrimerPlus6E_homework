#include <stdio.h>

int main(void) {
    char firstName[40];
    char lastName[40];
    printf("Please input your first and last name seperated by a space:\n");
    scanf("%s %s", firstName, lastName);
    printf("Welcome %s %s!\n", firstName, lastName);
    return 0;
}
