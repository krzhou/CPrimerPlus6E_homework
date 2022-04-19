#include <stdio.h>
#include <string.h>

int main(void) {
    char firstName[50];
    char lastName[50];
    size_t firstNameLen;
    size_t lastNameLen;

    /* Read user's input. */
    printf("What's your first name? ");
    scanf("%s", firstName);
    firstNameLen = strlen(firstName);
    printf("What's your last name? ");
    scanf("%s", lastName);
    lastNameLen = strlen(lastName);

    /* Print results. */
    printf("%s %s\n", firstName, lastName);
    printf("%*zd %*zd\n", firstNameLen, firstNameLen, lastNameLen, lastNameLen);
    printf("%s %s\n", firstName, lastName);
    printf("%-*zd %-*zd\n", firstNameLen, firstNameLen, lastNameLen, lastNameLen);

    return 0;
}
