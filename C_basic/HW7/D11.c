/*
D11
���� ����������� ����� N.
��������� ���������� �1�
� �������� ������ �����.
*/

#include <stdio.h>

int edin (int x) {
    if (x > 0)
        return x%2 + edin (x/2);
    return 0;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", edin (a));
    return 0;
}
