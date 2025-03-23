/*
F4
Написать только одну функцию. Всю программу отправлять не надо.
Вывести в порядке возрастания цифры, входящие в строку.
Цифра - количество. Функция должно строго соответствовать прототипу:
void print_digit(char s[])
*/

#include <stdio.h>

#define CoM 5000

void print_digit(char s[]) {
    int counter = 0;
    int OutM [10] = {0};
    for (int i = 0; i < CoM; i++) {
        if (s[i] == '.')
            break;
        if ((s[i] >= '0') && (s[i] <= '9')) {
            for (int j = 0; j < 10; j++) {
                if ((s[i] - 48) == j)
                    OutM[j]++;
            }
        }
    }
    for (int k = 0; k < 10; k++) {
        if (OutM[k] == 0)
            continue;
        printf ("%d %d\n", k, OutM[k]);
    }
}

