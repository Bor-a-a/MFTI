/*
B11
������ ����� ����� � ������������� ���, ��� ����� ������ ����� ����� ��������� � �.�.
*/

#include <stdio.h>

int main (void) {
    int a, res = 0;
    scanf ("%d", &a);
    while (a > 0) {
            res = res*10 + (a%10);
            a = a/10;
    }
printf ("%d", res);
return 0;
}
