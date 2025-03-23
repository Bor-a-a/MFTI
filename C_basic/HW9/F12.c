/*
F12
Составить функцию которая меняет в
массиве минимальный и максимальный элемент местами.
Прототип функции
void change_max_min(int size, int a[])
*/

#include <stdio.h>


int find_max_pos (int Massiv[], int size) {
    int max_pos = 0;
    for (int i = 0; i < size; i++)
        max_pos = (Massiv[max_pos] > Massiv[i])? max_pos : i;
    // printf ("max = %d\n", max);
    return max_pos;
}

int find_min_pos (int Massiv[], int size) {
    int min_pos = 0;
    for (int i = 0; i < size; i++)
        min_pos = (Massiv[min_pos] < Massiv[i])? min_pos : i;
       // printf ("min = %d\n", min);
    return min_pos;
}

void change_max_min(int size, int a[]) {
    int maxi = find_max_pos (a, size);
    int mini = find_min_pos (a, size);
    int tmp;
    tmp = a[maxi];
    a[maxi] = a[mini];
    a[mini] = tmp;
}

