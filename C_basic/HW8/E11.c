/*
E11
������� ������ �� 10 ��������� �
������������� ��� �� ��������� �����.
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

int sort_mass_last_digit (int Massiv[], int SizeM) {
    int tmp;
    for (int i = 0; i < (SizeM-1); i++)
    if ((Massiv [i])%10 > (Massiv [i+1])%10) {
        tmp = Massiv [i+1];
        Massiv [i+1] = Massiv [i];
        Massiv [i] = tmp;
        return 1;
    }
    return 0;
}

int main (void) {
    int a [CoM];
    input_massiv (a);
    while (sort_mass_last_digit(a, CoM) != 0)
        sort_mass_last_digit (a, CoM);
    output_massiv (a);
    return 0;
}
