/*
B12
������������ ���� ������������ ����� � ����������.
��������� ������ ���������� ���������� � ���������� �����,
������� ������ � ������ ������� ������������ �����.
*/

#include <stdio.h>

int main (void) {
    int a, ct, min = 9, max = 0;
    scanf ("%d", &a);
    while (a > 0) {
        ct = a%10;
        if (ct < min) min = ct;
        if (ct > max) max = ct;
        a = a/10;
    }
    printf ("%d %d", min, max);
    return 0;
}
