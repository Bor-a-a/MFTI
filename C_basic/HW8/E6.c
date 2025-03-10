/*
E6
Считать массив из 12 элементов и посчитать
среднее арифметическое элементов массива.
*/

#include <stdio.h>

#define CoM 12

//Функция ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

//Функция вычисления среднего арифметического
float sr_arf (int Massiv[]) {
    float summ = 0;
    for (int i = 0; i < CoM; i++)
        summ += (float) Massiv [i];
    return (summ/CoM);
}

int main (void) {
    int a[CoM];
    input_massiv (a);
    printf ("%.2f", sr_arf(a));
    return 0;
}
