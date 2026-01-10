#include <stdint.h>
#include <inttypes.h>
#include "gen_api.h"
#include "int_data.h"

void put_int_data (zapis IND[]) {
        int_data (IND, 7, 2022, 01, 10, 11, 00, 00, -5);
        int_data (IND, 1, 2022, 01, 10, 11, 30, 00, -7);
        int_data (IND, 2, 2022, 01, 11, 9, 00, 00, -5);
        int_data (IND, 11, 2022, 02, 11, 15, 00, 00, -1);
        int_data (IND, 4, 2022, 02, 13, 15, 00, 00, 0);
        int_data (IND, 5, 2022, 03, 01, 15, 00, 00, +1);
        int_data (IND, 15, 2022, 06, 10, 14, 30, 10, +25);
}
