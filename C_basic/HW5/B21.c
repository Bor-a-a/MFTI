/*
B20
��� ����� ��������� �� ���������� ���� � ����, ������������� �������� �.�
��������� ��� ��������� ���������� ����� � ��������.
*/

#include <stdio.h>

int main (void) {
    int let;
    while ((let = getchar ())!= '.') {
        if ((let < 'a') && (let >= 'A'))
            let= let+32;
        putchar (let);
    }
    return 0;

}
