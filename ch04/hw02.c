#include <stdio.h>
#include <string.h>

int main(void) {
    char name[40];

    /* Read user's name. */
    printf("Please input your name: ");
    scanf("%s", name);

    /* Print user's name surrounded by "". */
    printf("\"%s\"\n", name);

    /* Print user's name surrounded by "" in field width of 20 and align right. */
    printf("\"%20s\"\n", name);

    /* Print user's name surrounded by "" in field width of 20 and align left. */
    printf("\"%-20s\"\n", name);

    /* Print user's name in width of 3 more than the name. */
    printf("\"%*s\"\n", strlen(name) + 3, name);

    return 0;
}
