/*
B19
������ ����������� ����� � ����������, ����� ��, ��� ����� ��� ���� ����� 10.
*/

#include <stdio.h>

int main (void) {
    int a, summ = 0;
    scanf ("%d", &a);
    while (a > 0) {
        summ += a%10;
        a = a/10;
    }
    if (summ == 10)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}
