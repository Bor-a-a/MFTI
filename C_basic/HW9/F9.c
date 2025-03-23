/*
F9
��������� ������ ������� ������� � ������� ������� ������������
�� ������������� ��������� � ������ ��� ������� � ��������� ���������
�������. �������������, ��� � ������� ������ ���� ����� ������� ���
�� ����� ������� �����������. ���� ������������� ��������� ��� -
������ �� ������.
�������� �������: void swap_negmax_last(int size, int a[])*/

#include <stdio.h>

#define CoM 10

void swap_negmax_last(int size, int a[]) {
    int pos_minimal = 0, tmp = 0;
    for (int i = 0; i < size; i++) {
        if (((a[i] > a[pos_minimal]) && (a[i] < 0)) || ((a[pos_minimal] >= 0) && (a[i] < 0))) {
            //printf ("new pos_min = %d , min = %d\n", pos_minimal, a[pos_minimal]);
            pos_minimal = i;
        }

    }
    if (a[pos_minimal] < 0) {
        tmp = a[pos_minimal];
        a[pos_minimal] = a[size-1];
        a[size-1] = tmp;
    }
}

//��������� ����� �������
void input_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        scanf ("%d", &Massiv [i]);
}

//��������� ������ �������
void output_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        printf ("%d ", Massiv[i]);
        printf ("\n");
}

int main (void) {
    int a[CoM];
    input_massiv (CoM, a);
    swap_negmax_last (CoM, a);
    output_massiv (CoM, a);
    return 0;
}

