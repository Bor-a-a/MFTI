/*
B4
������ ����� ����� � ����������, ����� ��, ��� � �� ����� 3 �����.
*/

#include <stdio.h>

int main (void) {
    int a, i=0;
    scanf ("%d", &a);
    while (a > 0) {
        a=a/10;
        i++;
        }
    if (i == 3)  printf ("YES");
    else printf ("NO");
return 0;
}
