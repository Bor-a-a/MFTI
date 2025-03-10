/*
E10
Считать массив из 12 элементов и
выполнить циклический сдвиг ВПРАВО на 4 элемента.
*/

#include <stdio.h>

#define CoM 12
#define COUNT_OF_STEPS 4

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

void right_shift_massiv (int size, int Massiv [], int steps) {
    for (int i = 0; i < steps; i++)
        one_right_shift_massiv (size, Massiv);
}

int main (void) {
    int a[CoM];
    input_massiv(a);
    right_shift_massiv(CoM, a, COUNT_OF_STEPS);
    output_massiv(a);
    return 0;
}
