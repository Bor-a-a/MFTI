/*
C1
Составить функцию, модуль числа и привести пример ее использования.
*/

#include <stdio.h>

int abs (int x) {
    return x = (x > 0)? x : (-1*x);
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", abs (a));
    return 0;
}
