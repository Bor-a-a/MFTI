#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "temp_api.h"


//Перевод месяца из строки в число
uint8_t month_to_int (char in[]) {
    return 10*(in[0] - 48) + (in[1] - 48);
}

//Максимальная месячная температура
int8_t stat_maxmt (zapis IND[], char tec_month[]){
    int8_t maxim = -100;
    uint8_t tec_m_dig = month_to_int (tec_month);
    //printf ("tec month: %"PRIu8 "\n", tec_m_dig);
    for (int i = 0; i < MEM_VOL; i++) {
        if ((month_to_int (IND[i].month) == tec_m_dig) && (IND[i].tmpr > maxim)) {
            maxim = IND[i].tmpr;
            }
    }
    return maxim;
}

//Минимальная месячная температура
int8_t stat_minmt (zapis IND[], char tec_month[]){
    int8_t minim = 100;
    uint8_t tec_m_dig = month_to_int (tec_month);
    //printf ("tec month: %"PRIu8 "\n", tec_m_dig);
    for (int i = 0; i < MEM_VOL; i++) {
        if ((month_to_int (IND[i].month) == tec_m_dig) && (IND[i].tmpr < minim)) {
            minim = IND[i].tmpr;
            }
    }
return minim;
}

//Средняя месячная температура
float stat_midmt (zapis IND[], char tec_month[]){
    int8_t mid = 0;
    uint8_t tec_m_dig = month_to_int (tec_month);
    int8_t cnt = 0;
    //printf ("tec month: %"PRIu8 "\n", tec_m_dig);
    for (int i = 0; i < MEM_VOL; i++) {
        if (month_to_int (IND[i].month) == tec_m_dig) {
            mid += IND[i].tmpr;
            cnt++;
            }
    }
return ((float) mid / (float) cnt);
}
//Минимальная годовая температура
int8_t stat_minyt (zapis IND[], int16_t tec_year) {
    int8_t minim = 100;
    for (int i = 0; i < MEM_VOL; i++) {
        if ((IND[i].year == tec_year) && (IND[i].tmpr < minim))
            minim = IND[i].tmpr;
            }
    return minim;
}
//Максимальная годовая температура
int8_t stat_maxyt (zapis IND[], int16_t tec_year) {
    int8_t maxim = -100;
    for (int i = 0; i < MEM_VOL; i++) {
        if ((IND[i].year == tec_year) && (IND[i].tmpr > maxim))
            maxim = IND[i].tmpr;
    }
    return maxim;
}
//Средняя годовая температура
float stat_midyt (zapis IND[], int16_t tec_year){
    int8_t mid = 0;
    int8_t cnt = 0;
    //printf ("tec month: %"PRIu8 "\n", tec_m_dig);
    for (int i = 0; i < MEM_VOL; i++) {
        if (IND[i].year == tec_year) {
            mid += IND[i].tmpr;
            cnt++;
            }
    }
return ((float) mid / (float) cnt);
}
//Ввод данных
void int_data (zapis IND[], uint8_t num, uint16_t in_year, uint8_t in_month, uint8_t in_date, uint8_t in_hour, uint8_t in_mnt, uint8_t in_snd, int8_t in_tmpr) {
    IND[num].year = in_year;
    IND[num].date = in_date;
    IND[num].hour = in_hour;
    IND[num].mnt = in_mnt;
    IND[num].snd = in_snd;
    IND[num].tmpr = in_tmpr;
    if (in_month <= 9) {
        IND[num].month[0] = '0';
        IND[num].month[1] = in_month + 48;
        IND[num].month[2] = '\0';
    }
        else {
        IND[num].month[0] = '1';
        IND[num].month[1] = (in_month-10) + 48;
        IND[num].month[0] = '\0';
        }
}
//Начальное заполнение массива
void initial_data (zapis IND[]) {
    for (int i = 0; i <MEM_VOL; i++)
        int_data (IND, i, 0, 0, 0, 0, 0, 0, -101);
}

//Вывод данных
void print_data (zapis IND[], uint8_t num) {
    printf ("Data: %"PRIu8 ".%s" ".%"PRIu16, IND[num].date, IND[num].month, IND[num].year);
    //printf (" %"PRIu8 "%"PRIu8, "%"PRIu8, IND[num].hour, IND[num].mnt, IND[num].snd);
    printf ("  Time: ");
    if (IND[num].hour <= 9) printf ("0");
    printf ("%"PRIu8 ":", IND[num].hour);
    if (IND[num].mnt <= 9) printf ("0");
    printf ("%"PRIu8 ":", IND[num].mnt);
    if (IND[num].snd <= 9) printf ("0");
    printf ("%"PRIu8, IND[num].snd);
    printf ("  Temperature: %"PRIi8 "\n", IND[num].tmpr);
}

