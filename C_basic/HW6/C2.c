/*
C2
��������� �������, ���������� ����� N � ������� P.
int power(n, p) � �������� ������ �� �������������.
*/

#include <stdio.h>

int power(int n, int p) {
    int i, res=1;
    for (i = 1; i <= p; i++)
        res = res*n;
    return res;
}

int main (void) {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d", power (a,b));
    return 0;
}
