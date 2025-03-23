/*
F14
Составить функцию которая возвращает сумму
элементов в заданном отрезке [from, to] для массива.
Прототип функции
int sum_between_ab(int from, int to, int size, int a[])
*/

#include <stdio.h>

#define CoM 12
#define mini 3
#define maxi 5

//Процедура ввода массива
void input_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        scanf ("%d", &Massiv [i]);
}

int sum_between_ab(int from, int to, int size, int a[]) {
    int summa = 0;
    for (int i = from; i <= to; i++) {
        for (int j = 0; j < size; j++) {
            if (a[j] == i) {
                summa += a[j];
                //printf ("i = %d j = %d a[j] = %d summa = %d\n", i, j, a[j], summa);
            }
        }
    }
    return summa;
}

int main (void) {
    int a[CoM];
    input_massiv (CoM, a);
    printf ("%d", sum_between_ab (mini, maxi, CoM, a));
    return 0;
}
