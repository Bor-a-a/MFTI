/*
D6
���� ������ ��������������� �������� ����� '.'
���������� ������ ��������.
���������� ����������� �������,
������� ��������� � �������� ������ ��������.
void reverse_string()
*/

#include <stdio.h>

void reverse_string() {
    char a;
    a = getchar ();
    if (a != '.') {
        reverse_string ();
        putchar (a);
    }
}

int main (void) {
    reverse_string ();
    return 0;
}
