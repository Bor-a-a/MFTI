/*
C20
�� ���� �������� ������ ��������� �� �������� '(', ')'
� ��������������� �������� '.'.
������ ������ �� ����� 1000 ��������.
*/

#include <stdio.h>

int main (void) {
    char a;
    int kol;
    while ((a= getchar()) != '.') {
        if (a == '(') kol++;
        if (a == ')') kol--;
        if (kol < 0) break;
    }
    if (kol == 0)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}
