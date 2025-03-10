/*
E1
Ввести c клавиатуры массив из 5 элементов,
найти среднее арифметическое всех элементов массива.
*/

#include <stdio.h>

#define CoM 5

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
    printf ("%.3f", sr_arf(a));
    return 0;
}
