/*
E5
—читать массив из 10 элементов и посчитать
сумму положительных элементов массива.
*/

#include <stdio.h>

#define CoM 10

void input_massiv (int Massiv []) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv[i]);
}

int SumPosElMass (int Massiv[]) {
    int result = 0;
    for (int i = 0; i < CoM; i++) {
        if (Massiv[i] > 0)
        result += Massiv [i];
    }
    return result;
}

int main (void) {
    int a [CoM];
    input_massiv (a);
    printf ("%d", SumPosElMass (a));
    return 0;
}
