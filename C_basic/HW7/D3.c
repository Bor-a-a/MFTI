/*
D3
���� ����� �� ������������� ����� N.
�������� ��� ��� ����� �� �����, � �������� �������,
�������� �� ��������� ��� ������ ��������.
*/

#include <stdio.h>

void rev_dig (int x) {
    printf ("%d ", x%10);
    if ((x/10) > 0)
        rev_dig (x/10);
}

int main (void) {
    int a;
    scanf ("%d", &a);
    rev_dig (a);
    return 0;
}
