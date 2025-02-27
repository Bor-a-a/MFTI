/*
D16
�������� ���������� ����������� �������
� ��������� �� ���������� �������� ��
��������� ����������� ����� ������
�������� ������.
int is2pow(int n)
*/

#include <stdio.h>

int is2pow(int n) {
    if (n >= 2)
        return (n%2)+ is2pow(n/2);
    return 0;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    if (is2pow (a) == 0)
        printf ("YES");
    else
        printf ("NO");
}
