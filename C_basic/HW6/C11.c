/*
C11
��������� �������, ������� ���������� ���������� �����
�������� ���� ����������� � �������� ������ �� �������������.
int nod(int a, int b)
*/

#include <stdio.h>

int nod(int a, int b) {
    while ((a > 0) && (b > 0)) {
    if (a > b)
        a = a%b;
    else b = b%a;
    }
    if (a == 0)
        return b;
    else
        return a;
}

int main (void) {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d", nod (a,b));
    return 0;
}
