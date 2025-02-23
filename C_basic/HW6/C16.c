/*
C16
��������� ������� ���������� �������,
������� ����������, ����� ��, ��� ����� �������.
��������� ������� ������ ������. int is_prime(int n)
*/

#include <stdio.h>

int is_prime(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i < n; i++)
        if (n%i == 0)
            return 0;
    return 1;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    if (is_prime (a) == 1)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}
