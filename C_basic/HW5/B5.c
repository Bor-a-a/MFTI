/*
B5
������ ����� ����� � ����� ����� ��� ����.
*/

#include <stdio.h>

int main (void) {
    int a, summ=0;
    scanf ("%d", &a);
    while (a > 0) {
        summ = summ + a%10;
        a=a/10;
        }
    printf ("%d", summ);
return 0;
}
