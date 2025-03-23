/*
F17
Составить функцию которая находит след матрицы в двумерном массиве.
Показать пример ее работы на матрице из 5 на 5 элементов.
След матрицы - это сумма элементов на главной диагонали.
*/

#include <stdio.h>

#define CoM 5

void input_matrix_2mer (int a[][CoM]) {
    for (int i = 0; i < CoM; i++) {
        for (int j = 0; j < CoM; j++)
            scanf ("%d", &a[i][j]);
    }
}


void output_matrix_2mer (int a[][CoM]) {
    for (int i = 0; i < CoM; i++) {
        for (int j = 0; j < CoM; j++)
            printf ("%d ", a[i][j]);
        printf ("\n");
    }
}


int sled (int a[][CoM], int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
        result += a[i][i];
    return result;
}

int main (void) {
    int a[CoM][CoM];
    input_matrix_2mer (a);
    printf ("%d", sled(a, CoM));
    //output_matrix_2mer (a);
    return 0;
;}
