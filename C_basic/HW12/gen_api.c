#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "gen_api.h"


//Перевод месяца из строки в число
uint8_t month_to_int (char in[]) {
    return 10*(in[0] - 48) + (in[1] - 48);
}

//Перевод месяца из числа в строку
void month_to_str (char out[3], int in) {
    if (in <= 9) {
        out[0] = '0';
        out[1] = in + 48;
        out[2] = '\0';
    }
        else {
        out[0] = '1';
        out[1] = (in-10) + 48;
        out[2] = '\0';
        }
}

//Максимальная месячная температура
int8_t stat_maxmt (zapis IND[], char tec_month[]){
    int8_t maxim = -100;
    uint8_t tec_m_dig = month_to_int (tec_month);
    for (int i = 0; i < MEM_VOL; i++) {
        if ((IND[i].DF == 1) && (month_to_int (IND[i].month) == tec_m_dig) && (IND[i].tmpr > maxim)) {
            maxim = IND[i].tmpr;
            }
    }
    return maxim;
}

//Минимальная месячная температура
int8_t stat_minmt (zapis IND[], char tec_month[]){
    int8_t minim = 100;
    uint8_t tec_m_dig = month_to_int (tec_month);
    for (int i = 0; i < MEM_VOL; i++) {
        if ((IND[i].DF == 1) && (month_to_int (IND[i].month) == tec_m_dig) && (IND[i].tmpr < minim)) {
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
    for (int i = 0; i < MEM_VOL; i++) {
        if ((IND[i].DF == 1) && (month_to_int (IND[i].month) == tec_m_dig)) {
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
        if ((IND[i].DF == 1) && (IND[i].year == tec_year) && (IND[i].tmpr < minim))
            minim = IND[i].tmpr;
            }
    return minim;
}
//Максимальная годовая температура
int8_t stat_maxyt (zapis IND[], int16_t tec_year) {
    int8_t maxim = -100;
    for (int i = 0; i < MEM_VOL; i++) {
        if ((IND[i].DF == 1) && (IND[i].year == tec_year) && (IND[i].tmpr > maxim))
            maxim = IND[i].tmpr;
    }
    return maxim;
}
//Средняя годовая температура
float stat_midyt (zapis IND[], int16_t tec_year){
    int8_t mid = 0;
    int8_t cnt = 0;
    for (int i = 0; i < MEM_VOL; i++) {
        if ((IND[i].DF == 1) && (IND[i].year == tec_year)) {
            mid += IND[i].tmpr;
            cnt++;
            }
    }
return ((float) mid / (float) cnt);
}
//Ввод записи
void int_data (zapis IND[], uint16_t num, uint16_t in_year, uint8_t in_month, uint8_t in_date, uint8_t in_hour, uint8_t in_mnt, uint8_t in_snd, int8_t in_tmpr) {
    IND[num].year = in_year;
    IND[num].date = in_date;
    IND[num].hour = in_hour;
    IND[num].mnt = in_mnt;
    IND[num].snd = in_snd;
    IND[num].tmpr = in_tmpr;
    IND[num].DF = 1;
    month_to_str (IND[num].month, in_month);
}

//Удаление записи
void del_data (zapis IND[], uint16_t num) {
    int_data (IND, num, 0, 0, 0, 0, 0, 0, -101);
    IND[num].DF = 0;

}

//Начальное заполнение массива
void initial_data (zapis IND[]) {
    for (int i = 0; i < MEM_VOL; i++) {
        del_data (IND, i);
    }
}

//Проверка количества записей в заданном месяце
uint16_t cntr_for_month (zapis IND[], char tek_month[]) {
    uint16_t cntr = 0;
    for (int i = 0; i < MEM_VOL; i++)
        if ((IND[i].DF == 1) && (month_to_int (IND[i].month) == month_to_int(tek_month)))
        cntr++;
    return cntr;
}

//Перевод даты в количество секунд с 2000 года (примерное)
uint32_t date_to_sec (zapis IND) {
    return IND.snd +
    60*IND.mnt +
    3600*IND.hour +
    86400*IND.date +
    2592000*month_to_int (IND.month) +
    31104000*(IND.year - 2000);
}

//сортировка записей массива по хронологии
void sort_mass_zap (zapis IND[]) {
    zapis VREM;
    int flag = 0;
    while (flag == 0) {
        flag = 1;
        for (int i = 0; i < MEM_VOL-1; i++) {
            if ((IND[i].DF < IND[i+1].DF) ||
            (date_to_sec(IND[i]) > date_to_sec(IND[i+1]))) {
                //printf ("Changing No %d and No %d. ", i, i+1);
                //printf ("No %d existing %d, sec=%llu. ",i, IND[i].DF, date_to_sec(IND[i]));
                //printf ("No %d existing %d, sec=%llu\n",i+1, IND[i+1].DF, date_to_sec(IND[i+1]));
                flag = 0;
                VREM = IND[i];
                IND[i] = IND[i+1];
                IND[i+1] = VREM;
            }
        }
    }

}

//Вывод данных развернутый
void print_data (zapis IND[], uint16_t num) {
    printf ("Data: %"PRIu8 ".%s" ".%"PRIu16, IND[num].date, IND[num].month, IND[num].year);
    printf ("  Time: ");
    if (IND[num].hour <= 9) printf ("0");
    printf ("%"PRIu8 ":", IND[num].hour);
    if (IND[num].mnt <= 9) printf ("0");
    printf ("%"PRIu8 ":", IND[num].mnt);
    if (IND[num].snd <= 9) printf ("0");
    printf ("%"PRIu8, IND[num].snd);
    printf ("  Temperature: %"PRIi8 "\n", IND[num].tmpr);
}

//Вывод всей базы данных
void print_all_base (zapis IND[]) {
    for (uint16_t i = 0; i < MEM_VOL; i++)
        if (IND[i].DF == 1) {
            printf ("Zapis No %d ", i);
            print_data (IND, i);
        }
}

//Вывод статистики за месяц
void print_stat_month (zapis IND[], int tek_month) {
    char t_m[3];
    month_to_str (t_m, tek_month);
   if (cntr_for_month (IND, t_m) == 0)
        printf ("No data from month No %d\n", tek_month);
   else {
    printf ("Month No %"PRIu8 " statistics:\n", tek_month);
    printf ("Min temp = %"PRIi8 "\n", stat_minmt (IND, t_m));
    printf ("Max temp = %"PRIi8 "\n", stat_maxmt (IND, t_m));
    printf ("Mid temp = %.2f\n", stat_midmt(IND, t_m));
   }
}

