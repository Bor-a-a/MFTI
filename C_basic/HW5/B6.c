/*
B6
������ ����� ����� � ����������, ����� ��, ��� � ��� ������ ���� ��� ���������� �����, ������� �����.
*/

#include <stdio.h>

int main (void) {
    int a, k=0, s=0;
    scanf ("%d", &a);
    k = a%10;
    while (a > 0) {
        if (k == (a%10)) s++;
        k = a%10;
        a=a/10;
        }
    if (s > 1) printf ("YES");
    else printf ("NO");
return 0;
}
