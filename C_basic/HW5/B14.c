/*
B14
���� ������������������ ��������� ����� �����,
� ����� ������������������ ����� 0.
��������� ���������� �����.
*/

#include <stdio.h>

int main (void) {
    int a, i = 0;
    while (1) {
        scanf ("%d", &a);
        if (a == 0) break;
        i++;
    }
    printf ("%d", i);
    return 0;
}
