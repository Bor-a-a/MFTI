#ifndef TEMP_API_H_INCLUDED
#define TEMP_API_H_INCLUDED

#define MEM_VOL 500

typedef struct {
    uint16_t year;  //год
    char month [3]; //месяц
    uint8_t date;   //день
    uint8_t hour;   //часы
    uint8_t mnt;    //минуты
    uint8_t snd;    //секунды
    int8_t tmpr;   //температура
} zapis;

//Перевод месяца из строки в число
uint8_t month_to_int (char in[]);

//Максимальная месячная температура
int8_t stat_maxmt (zapis IND[], char tec_month[]);

//Минимальная месячная температура
int8_t stat_minmt (zapis IND[], char tec_month[]);

//Средняя месячная температура
float stat_midmt (zapis IND[], char tec_month[]);

//Минимальная годовая температура
int8_t stat_minyt (zapis IND[], int16_t tec_year);

//Максимальная годовая температура
int8_t stat_maxyt (zapis IND[], int16_t tec_year);

//Средняя годовая температура
float stat_midyt (zapis IND[], int16_t tec_year);

//Ввод данных
void int_data (zapis IND[], uint8_t num, uint16_t in_year, uint8_t in_month, uint8_t in_date, uint8_t in_hour, uint8_t in_mnt, uint8_t in_snd, int8_t in_tmpr);

//Начальное заполнение массива
void initial_data (zapis IND[]);

//Вывод данных
void print_data (zapis IND[], uint8_t num);

#endif // TEMP_API_H_INCLUDED
