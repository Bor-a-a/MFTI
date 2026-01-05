#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "temp_api.h"



int main (void) {
    zapis DANN [MEM_VOL];
    char C1[3] = {'0', '1', '\0'};
    initial_data (DANN);
    int_data (DANN, 0, 2022, 01, 10, 11, 00, 00, -5);
    int_data (DANN, 1, 2022, 01, 10, 11, 30, 00, -7);
    int_data (DANN, 2, 2022, 01, 11, 9, 00, 00, -5);
    int_data (DANN, 3, 2022, 02, 11, 15, 00, 00, -1);
    int_data (DANN, 4, 2022, 02, 13, 15, 00, 00, 0);
    int_data (DANN, 5, 2022, 03, 01, 15, 00, 00, +1);


    printf ("Month:\n");
    printf ("Max: %"PRIi8 "\n", stat_maxmt (DANN, C1));
    printf ("Min: %"PRIi8 "\n", stat_minmt (DANN, C1));
    printf ("Mid: %.2f\n", stat_midmt(DANN, C1));
    printf ("Year:\n");
    printf ("Max: %"PRIi8 "\n", stat_maxyt (DANN, 2022));
    printf ("Min: %"PRIi8 "\n", stat_minyt (DANN, 2022));
    printf ("Mid: %.2f\n", stat_midyt(DANN, 2022));


    return 0;
}
