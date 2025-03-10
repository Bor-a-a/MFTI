/*
E4
—читать массив из 10 элементов и найти в нем
два максимальных элемента и напечатать их сумму.
*/

#include <stdio.h>

#define CoM 10

void input_massiv (int Massiv []) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv[i]);
}

int Ret2Max (int Massiv []) {
    int Max1 = 0, Max2 = 0, i;
    for (i = 0; i < CoM; i++) {
        if (Massiv[i] > Massiv[Max1])
            Max1 = i;
    }
    if (Max1 == 0)
        Max2 = 1;
    for (i = 0; i < CoM; i++) {
        if (i == Max1) continue;
        if (Massiv[i] > Massiv[Max2])
            Max2 = i;
    }
    return (Massiv[Max1] + Massiv[Max2]);
}

int main (void) {
 int a [CoM];
 input_massiv (a);
 printf ("%d", Ret2Max(a));
 return 0;
}
