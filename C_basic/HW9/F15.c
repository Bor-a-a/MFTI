/*
F15
Составить функцию которая определяет в массиве,
состоящем из положительных и отрицательных чисел,
сколько элементов превосходят по модулю максимальный элемент.
Прототип функции
int count_bigger_abs(int n, int a[]);
*/

#include <stdio.h>

#define CoM 10

//Процедура ввода массива
void input_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        scanf ("%d", &Massiv [i]);
}

int find_max (int Massiv[], int size) {
    int max = Massiv[0];
    for (int i = 0; i < size; i++)
        max = (max > Massiv[i])? max : Massiv[i];
   printf ("max = %d\n", max);
    return max;
}

int count_bigger_abs(int n, int a[]) {
    int counter = 0;
    for (int i = 0; i < n; i++)
        if (abs(a[i])> find_max(a, n))
            counter++;
    return counter;
}

int main (void) {
    int a[CoM];
    input_massiv (CoM, a);
    printf ("%d", count_bigger_abs(CoM, a));
    return 0;
}
