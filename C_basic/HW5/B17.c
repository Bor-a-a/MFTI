/*
B17
������ ���������� ����� � ���������� ��� �����
�� 10 �� ���������� �����
- � ������� ����� ���� ����� ������������ ����
*/

#include <stdio.h>

int main (void) {
    int a, i, j, summ, prod;
    scanf ("%d", &a);
    for (i = 10; i <= a; i++) {
         summ = 0;
         prod = 1;
         j = i;
         while (j > 0) {
            summ = summ + (j%10);
            prod = prod * (j%10);
            j = j/10;
            }
        if (summ == prod) printf ("%d ", i);
    }
    return 0;
}
