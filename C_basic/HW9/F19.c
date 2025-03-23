/*
F19
Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной диагонали.
*/

#include <stdio.h>

#define CoM 5

float sa_gl_diag (int size, int a[][size]) {
    float summ = 0;
    for (int i = 0; i < size; i++)
        summ += a[i][i];
    return (summ/(size));
}

void input_matrix_2mer (int a[][CoM]) {
    for (int i = 0; i < CoM; i++) {
        for (int j = 0; j < CoM; j++)
            scanf ("%d", &a[i][j]);
    }
}

int main (void) {
    int a[CoM][CoM];
    int counter = 0;
    input_matrix_2mer (a);
    for (int i = 0; i < CoM; i++) {
        for (int j = 0; j < CoM; j++) {
            //printf ("znach = %d sa = %f\n", a[i][j], sa_gl_diag(CoM, a));
            if ((a[i][j] > sa_gl_diag(CoM, a)) && (a[i][j] > 0))
                counter++;
        }
    }
    printf ("%d", counter);
    return 0;
}
