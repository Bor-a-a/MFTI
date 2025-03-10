/*
E3
Считать массив из 10 элементов и найти в нем
максимальный и минимальный элементы и их номера.
*/

#include <stdio.h>

#define CoM 10

//Функция ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

/*Функция возврата номера максимального элемента
массива (при k = 0) или его значения (при k = 1)*/
int Max_El_Mass (int Massiv[], int k) {
    int Maxnum = 0;
    for (int i = 0; i < CoM; i++)
        Maxnum = (Massiv [Maxnum] >= Massiv [i])? Maxnum : i;
    if (k == 0) return (Maxnum+1);
    if (k == 1) return Massiv [Maxnum];
    return 0;
}

/*Функция возврата номера минимального элемента
массива (при k = 0) или его значения (при k = 1)*/
int Min_El_Mass (int Massiv[], int k) {
    int Minnum = 0;
    for (int i = 0; i < CoM; i++)
        Minnum = (Massiv [Minnum] <= Massiv [i])? Minnum : i;
    if (k == 0) return (Minnum+1);
    if (k == 1) return Massiv [Minnum];
    return 0;
}

int main (void) {
    int M1[CoM];
    input_massiv (M1);
    printf ("%d %d %d %d", Max_El_Mass (M1, 0), Max_El_Mass(M1, 1),
    Min_El_Mass(M1, 0), Min_El_Mass (M1, 1));
return 0;
}
