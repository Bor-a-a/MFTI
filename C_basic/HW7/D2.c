/*
D2
��������� ����������� �������,
������� ���������� ����� ���� ����� �� 1 �� N
*/

#include <stdio.h>

int rec_sum (int x) {
    if (x > 1)
        return x + rec_sum (x-1);
    return 1;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", rec_sum(a));
    return 0;
}
