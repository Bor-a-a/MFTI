/*
D14
���� ������������������ ����� �����
����� ������, ������������� ������ 0.
�������� ��� �������� ����� �� ����
������������������, �������� �� �������.
*/

#include <stdio.h>

void print_odd (void) {
    int a;
    scanf ("%d", &a);
    if (a != 0) {
        if (a%2 != 0)
            printf ("%d ", a);
        print_odd ();
        }
}

int main (void) {
    print_odd ();
    return 0;
}
