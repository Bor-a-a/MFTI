/*
F11
Дан целочисленный массив из 30 элементов.
Элементы массива могут принимать произвольные целые
значения помещающиеся в int. Необходимо создать функцию,
которая находит и выводит в порядке возрастания номера
двух элементов массива, сумма которых минимальна.
*/

#include <stdio.h>

#define CoM 30

//Процедура ввода массива
void input_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        scanf ("%d", &Massiv [i]);
}


void two_min_pos (int n, int a[]) {
    int pos_min_1 = 0, pos_min_2 = 0;
    for (int i = 0; i < n; i++)
        pos_min_1 = (a[i] < a[pos_min_1])? i : pos_min_1;
    if (pos_min_1 == pos_min_2)
        pos_min_2 = 1;
    for (int j = 0; j < n; j++) {
        if ((a[j] < a[pos_min_2]) && (j != pos_min_1))
            pos_min_2 = j;
        }
    if (pos_min_1 < pos_min_2)
        printf ("%d %d", pos_min_1, pos_min_2);
    else
        printf ("%d %d", pos_min_2, pos_min_1);
}

int main (void) {
    int a[CoM];
    input_massiv (CoM, a);
    two_min_pos (CoM, a);
    return 0;
}
