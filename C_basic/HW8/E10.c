/*
E10
������� ������ �� 12 ��������� �
��������� ����������� ����� ������ �� 4 ��������.
*/

#include <stdio.h>

#define CoM 12
#define COUNT_OF_STEPS 4

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
