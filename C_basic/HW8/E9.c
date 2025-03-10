/*
E9
������� ������ �� 10 ��������� � ���������
����������� ����� ������ �� 1.
*/

#include <stdio.h>

#define CoM 10

//��������� ����� �������
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

//��������� ������ �������
void output_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        printf ("%d ", Massiv[i]);
}

//��������� ������ ������� �� 1 ������� ������
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
