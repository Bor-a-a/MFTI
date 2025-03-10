/*
E15
������� 10 ����� � ��������� �� -500 �� 500
� ��������� �� ���� ��������: � ���� ��������
������ �������������, �� ������ - ������
�������������. �����, ������ ����, ������������.
������� �� ����� ��� �������� ����� ��������.
*/

#include <stdio.h>

#define CoM 10

//��������� ����� �������
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

//��������� ������ ������� c ������
void output_massiv_l (int Massiv[], int length) {
    for (int i = 0; i < length; i++)
        printf ("%d ", Massiv[i]);
}

//������ ����� � ������ c ��������� ����������
int put_in_mass (int Massiv[],int Input_c, int counter) {
    Massiv[counter] = Input_c;
    return counter + 1;
}

int sort_pos_neg (int Massiv_in[], int Massiv_out[], int znak, int SizeM) {
    int counter = 0;
    for (int i = 0; i < SizeM; i++) {
        if (znak > 0) {
            if (Massiv_in[i] > 0) {
                //printf ("znak = %d, chislo = %d, couter = %d\n", znak, Massiv_in[i], counter);
                counter = put_in_mass (Massiv_out, Massiv_in[i], counter);
            }
        }
          if (znak < 0) {
            if (Massiv_in[i] < 0) {
                //printf ("znak = %d, chislo = %d, couter = %d\n", znak, Massiv_in[i], counter);
                counter = put_in_mass (Massiv_out, Massiv_in[i], counter);
            }
        }
    }
    return counter;
}

int main (void) {
    int a[CoM], pos[CoM], neg[CoM];
    input_massiv (a);
    output_massiv_l (pos, sort_pos_neg(a, pos, 1, CoM));
    output_massiv_l (neg, sort_pos_neg (a, neg, -1, CoM));
    return 0;
}
