/*
B16
��������� ��������� ��� ���������� ��� � ������� ��������� �������.
���� ��� ����������� �����. ����� ���������� ����� ��������.
*/

#include <stdio.h>

int main (void) {
    int a, b, min_del;
    scanf ("%d %d", &a, &b);
    while ((a != 0) && (b != 0)) {
        min_del = (a > b)? b : a;
        if (a > b)
            a = a%b;
        else b = b%a;
        }
    printf ("%d", min_del);
    return 0;

    }

