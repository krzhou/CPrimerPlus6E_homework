#include <stdio.h>

int main(void) {
    float bandwidth; /* Download bandwidth in Mb/s. */
    float filesize; /* Filesize in MB. */
    float elapsed; /* Expected time for downloading. */

    /* Input bandwidth and filesize. */
    printf("Please input download bandwidth (Mb/s): ");
    scanf("%f", &bandwidth);
    printf("Please input file size (MB): ");
    scanf("%f", &filesize);

    /* Print result. */
    elapsed = filesize * 8 / bandwidth;
    printf("At %0.2f megabits per second, a file of %0.2f megabytes\n"
           "downloads in %0.2f seconds.\n", bandwidth, filesize, elapsed);

    return 0;
}
