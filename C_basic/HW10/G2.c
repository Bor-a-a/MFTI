/*
G2
������� ����� N �� ����� input.txt. ������������ ������ �� N ��������.
N ������ �����, �� ������������� 26. �� ������ �������� ������ ���������
������ ����� � ������� �����������, ����� 0, �� �������� �������� -
��������� ����� � ������� ���������� � ���������� ��������.
��������� �������� � ���� output.txt
*/

#include <stdio.h>

int main (void) {
    FILE *f, *f1;
    int N, c_dig = 0, c_let = 2;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%d", &N);
    printf ("%d", N);
    for (int i = 1; i <= N; i++) {
        if (i%2 == 0) {
            fprintf (f1, "%d", c_let);
            c_let = (c_let == 8)? 2 : (c_let + 2);
        }
        else {
            fprintf (f1, "%c", ('A' + c_dig));
            c_dig++;
        }
    }
    fclose (f);
    fclose (f1);
    return 0;
}
