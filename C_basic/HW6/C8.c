/*
�8
��������� �������, ������� ��������� ���������
�������� ����� � ���������.
� �������� ������ �� �������������.
*/

#include <stdio.h>

char uvelicitel_bukov (char x) {
    if ((x <= 'z') && (x >= 'a'))
            return x-32;
    return x;
}

int main (void) {
    char a;
    while (1) {
        a = getchar ();
        if (a == '.') break;
        a = uvelicitel_bukov (a);
        putchar (a);
    }
    return 0;
}
