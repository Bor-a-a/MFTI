/*
E6
������� ������ �� 12 ��������� � ���������
������� �������������� ��������� �������.
*/

#include <stdio.h>

#define CoM 12

//������� ����� �������
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

//������� ���������� �������� ���������������
float sr_arf (int Massiv[]) {
    float summ = 0;
    for (int i = 0; i < CoM; i++)
        summ += (float) Massiv [i];
    return (summ/CoM);
}

int main (void) {
    int a[CoM];
    input_massiv (a);
    printf ("%.2f", sr_arf(a));
    return 0;
}
