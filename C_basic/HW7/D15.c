/*
D15
���� ������������������ ��������� ����� �����,
������������� ������ 0. ���� � ������������������
 �� ������. ���������� ���������� �������� �����
 � ���� ������������������. ��� ������� ������
 ���������� �������� ����������� ������� ����:
int max_find(int max)
*/

#include <stdio.h>

int max_find(int max) {
    int max_tec;
    scanf ("%d", &max_tec);
    if (max_tec == 0)
        return max;
    if (max_tec > max)
        return (max_find(max_tec));
    return max_find (max);
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", max_find (a));
    return 0;
}
