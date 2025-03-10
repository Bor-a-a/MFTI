/*
E7
������� ������ �� 10 ��������� � ��������� ��������
����������� 1-�� � 2-�� ������� �������. ����������
�������� ��������� ������ � ���������� ��� ����� ������.
*/

#include <stdio.h>

#define CoM 10

//������� ����� �������
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

void mid_mass_reverse (int Massiv[]) {
    int tmp = 0;             // ��������� ����������
    int centr = (CoM - 1)/2; // ����������� ������ �������
    int vr_centr = 0;        // ����� �������� �������
    for (int i = 0; i < CoM; i++) {
        if (i <= centr)
            vr_centr = centr / 2; // ���������� ����� �������� �������
        else
            vr_centr = centr + centr/2 + 1;
        //printf ("i = %d; centr = %d vr_centr =  %d\n", i, centr, vr_centr);
        if (i <= vr_centr) {
            tmp = Massiv [i];
            Massiv [i] = Massiv [2*vr_centr - i];
            Massiv [2*vr_centr - i] = tmp;
            }
        printf ("%d ", Massiv[i]);
    }
}

int main (void) {
int a[CoM];
input_massiv (a);
mid_mass_reverse (a);
return 0;
}
//0 1 2 3 4 5 6 7 8 9
