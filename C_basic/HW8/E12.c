/*
E12
������� ������ �� 10 ��������� � �������������
������ �������� �� �����������, � ������ � �� ��������.
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

void spec_sort (int Massiv[], int SizeM) {
    int center = SizeM/2;
    int flag = 1, tmp;
    while (flag != 0) {
        flag = 0;
        for (int i = 0; i < center-1; i++) {
            if (Massiv [i] > Massiv [i+1]) {
                tmp = Massiv [i+1];
                Massiv [i+1] = Massiv [i];
                Massiv [i] = tmp;
                flag = 1;
            }
        }
    }
    flag = 1;
    while (flag != 0) {
        flag = 0;
        for (int i = center; i < SizeM-1; i++) {
            if (Massiv [i] < Massiv [i+1]) {
                tmp = Massiv [i+1];
                Massiv [i+1] = Massiv [i];
                Massiv [i] = tmp;
                flag = 1;
            }
        }
    }
}

int main (void) {
    int a [CoM];
    input_massiv (a);
    spec_sort (a, CoM);
    output_massiv (a);
    return 0;
}
