/*
F3
Написать функцию и программу демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, входящие в десятичную запись
натурального числа N, не более 1000 цифр. Цифра пробел сколько раз
данная цифра встречается в числе.
*/

#include <stdio.h>

#define CoM 1000

void sostav_dig (int M, int Massiv[]) {
    int OutM [10] = {0};
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 10; j++) {
            if (Massiv [i] == j)
                OutM[j]++;
        }
    }
    for (int k = 0; k < 10; k++) {
        if (OutM[k] == 0)
            continue;
        printf ("%d %d\n", k, OutM[k]);
    }
}

int input_to_massiv (int Massiv[]) {
    char dig;
    int flag = 1, counter = 0;
    while (flag != 0) {
        dig = getchar();
        if ((dig < '0') || (dig > '9'))
            break;
        Massiv [counter] = dig - 48;
        counter++;
        if (counter > 1000)
            flag = 0;
    }
    return counter; //возвращает количество элементов
}

int main (void) {
    int a[CoM];
    sostav_dig (input_to_massiv (a), a);
    return 0;
}

