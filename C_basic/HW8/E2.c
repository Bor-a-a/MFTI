/*
E2
Ввести c клавиатуры массив из 5 элементов,
найти минимальный из них.
*/

#include <stdio.h>

#define CoM 5

//Функция ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

// Функция возврата значения минимального элемента массива
int Min_El_Mass (int Massiv []) {
    int minel = Massiv [0];
    for (int i = 1; i < CoM; i++)
        minel = (minel > Massiv [i])? Massiv [i] : minel;
    return minel;
}

int main (void) {
    int a[CoM];
    input_massiv (a);
    printf ("%d", Min_El_Mass(a));
    return 0;
}
