/*
F7
�������� �������, ������� ������� ����� �������,
���������� �� ������ � ����� �� ���������� ��������:
��������, ������ [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1]
������������� � [4,7,2,4] (�.�. ���������� � ����,
�� ����� ������������ ���������� ��������� ������ �����);
� ������ [1,1,1,0,0,0,0,0,0,0] ������������� � [0,3,7]
(�.�. ������ ����� - ��� �������,
 �� ������ ������� ���������������� ������� 0).
*/

//0 1 0 1 1 0 1 1 1 0
//0 0 1 0 0 1 0 0 0 0
//0 0 0 1 1 1 1 0 1 0
//1 1 1 1 0 1 1 0 0 1
//1 1 0 0 0 0 1 0 0 0
//1 1 0 0 1 1 0 1 1 1
//0 0 1 0 0 1 1 0 1 0
//0 0 1 1 1 1 0 0 1 0
//1 1 1 0 0 1 0 1 1 0
//1 0 0 1 0 1 1 0 0 1



/*
1 1 0 0 1 1 1 0 1 1
0 0 1 0 1 0 0 1 0 0
0 0 1 1 1 1 0 1 0 0
0 0 1 1 1 0 1 1 0 1
0 0 0 1 1 0 0 1 0 0
0 1 0 0 1 1 1 0 1 0
0 0 0 0 0 1 0 1 0 0
1 1 0 1 0 0 0 0 1 0
0 1 1 0 1 0 0 0 1 0
1 1 1 1 1 1 0 1 0 0
*/
#include <stdio.h>

#define CoM 100

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

 int compression(int a[], int b[], int N) {
    int counter = 0;
    int elem = 0;
    int num_pos = 0;
    for (int i = 0; i <= N; i++) {
        if (a[i] == elem)
            counter++;
        else {
            b[num_pos] = counter;
            num_pos++;
            counter = 1;
            if (elem == 0)
                elem = 1;
            else
                elem = 0;
        }
    }
    return num_pos;
 }

int main (void) {
    int M1[CoM], M2[CoM];
    int c = 0;
    input_massiv (CoM, M1);
    c = compression (M1, M2, CoM);
    output_massiv (c, M2);
    return 0;
}
