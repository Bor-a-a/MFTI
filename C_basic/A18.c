/*
A18
������ ��� �����. ���� ������ ����� ������ �������, �� ��������� �������� ����� Above.
���� ������ ����� ������ �������, �� ��������� �������� ����� Less.
� ���� ����� �����, ��������� ���������� ��������� Equal.
*/
#include <stdio.h>
#include <inttypes.h>

int main (void) {

int a, b;

scanf ("%d %d", &a, &b);

if (a > b) printf ("Above");
if (b > a) printf ("Less");
if (a == b) printf ("Equal");

return 0;
}
