/*
E9
Считать массив из 10 элементов и выполнить
циклический сдвиг ВПРАВО на 1.
*/

#include <stdio.h>

#define CoM 10

//Процедура ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

//Процедура вывода массива
void output_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        printf ("%d ", Massiv[i]);
}

//Процедура сдвига массива на 1 элемент вправо
void one_right_shift_massiv (int size, int Massiv []) {
    int tmp = Massiv [size-1];
    for (int i = size-1; i > 0; i--) {
        Massiv [i] = Massiv [i-1];
    }
    Massiv [0] = tmp;
}

int main (void) {
    int a[CoM];
    input_massiv(a);
    one_right_shift_massiv(CoM, a);
    output_massiv(a);
    return 0;
}
