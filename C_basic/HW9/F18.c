/*
F18
���� ������������� ���������� ������� 10 � 10. ����������� �������� ����������
����� ������������ ��������� �� ������ ������. ���������� �������� ���� �����.
��������������, ��� � ������ ������ ����� ������� ������������.
����������� ������� ������ ��������� � ������ �� 10 ���������
*/

#include <stdio.h>

#define CoM 10

int find_max (int Massiv[], int size) {
    int max = Massiv[0];
    for (int i = 0; i < size; i++)
        max = (max > Massiv[i])? max : Massiv[i];
   // printf ("max = %d\n", max);
    return max;
}

void input_matrix_2mer (int a[][CoM]) {
    for (int i = 0; i < CoM; i++) {
        for (int j = 0; j < CoM; j++)
            scanf ("%d", &a[i][j]);
    }
}

 int main (void) {
    int a[CoM][CoM];
    int *ptr = a;
    int summ = 0;
    input_matrix_2mer (a);
    for (int i = 0; i < CoM; i++) {
        summ += find_max (ptr + i*10, CoM);
       // printf ("str = %d zn = %d\n", i, find_max (ptr + i*10, CoM));
    }
    printf ("%d", summ);
    return 0;
 }
