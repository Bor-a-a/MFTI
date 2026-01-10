#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <unistd.h>
#include "gen_api.h"
#include "int_data.h"

void help_info (void) {
    printf ("Application works with weather control station data\n");
    printf ("Usable keys: \n");
    printf ("-h : help (if you read this you know that)\n");
    printf ("-f **Name_of_file** : use external data from file\n");
    printf (" (without this key will be used internal data\n");
    printf ("-m **Number of month** : give alalysis only from exact month\n");
}

int main(int argc, char *argv[]) {
    zapis DANN [MEM_VOL];
    int rez, flag_file = 0, n_vv = 0, flag_month = 0;
    char filename[32];
    char fulldata;
    FILE *f;
    opterr = 0;
    while ((rez = getopt (argc, argv, "hf:m:")) != -1) {
            switch (rez) {
            case 'h': help_info();
            case 'f': flag_file = 1; strcpy (filename, optarg);
            case 'm': flag_month = atoi (optarg);
            //case '?': printf ("flag didn't find, use -h to help\n");
            }
    }

     initial_data (DANN);
    if (flag_file == 0) {
        put_int_data (DANN);
    }
    else {
        printf ("Start reading file %s\n", filename);
        f = fopen (filename, "r");
        char vr_year [5], vr_month[3], vr_date[3], vr_hour[3], vr_min[3], vr_snd[3], vr_temp[4];
        while ((fscanf (f,"%s %s %s %s %s %s %s", vr_year, vr_month, vr_date, vr_hour, vr_min, vr_snd, vr_temp)) == 7) {
            DANN[n_vv].year = atoi (vr_year);
            strcpy (DANN[n_vv].month, vr_month);
            DANN[n_vv].date = atoi (vr_date);
            DANN[n_vv].hour = atoi (vr_hour);
            DANN[n_vv].mnt = atoi (vr_min);
            DANN[n_vv].snd = atoi (vr_snd);
            DANN[n_vv].tmpr = atoi (vr_temp);
            DANN[n_vv].DF = 1;
            n_vv++;
        }
        printf ("File reading ended, taken %d records\n", n_vv);
        fclose (f);
    }

    if (flag_month == 0) {
        for (int i = 1; i <= 12; i++) {
            print_stat_month (DANN, i);
        }
    }
    else print_stat_month (DANN, flag_month);

    printf ("Show all records?\n");
    printf ("Enter 'y' to show \n");
    scanf ("%c", &fulldata);
    if ((fulldata == 'y') || (fulldata == 'Y')) {
        sort_mass_zap (DANN);
        print_all_base (DANN);
    }
    printf ("End of program.");

    return 0;
}
