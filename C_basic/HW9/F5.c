/*
F5
�������� ������ ���� �������,
������� ������� ������������ ������� � �������.
��� ��������� ��������� �� ����.
�������� �������: int find_max_array(int size, int a[])
*/

#include <stdio.h>

int find_max_array(int size, int a[]) {
    int maxEl = a[0];
    for (int i = 0; i < size; i++)
        maxEl = (a[i] > maxEl)? a[i] : maxEl;
    return maxEl;
}
