/*
D20
�������� ����������� ������� ���������� ������ ����� n � ������� p.
int recurs_power(int n, int p)
��������� ������ �������, ������ ������.
*/

#include <stdio.h>

int recurs_power(int n, int p) {
    if (p >= 1)
        return n*recurs_power (n, p-1);
    return 1;
}

int main (void) {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d", recurs_power(a, b));
    return 0;
}
