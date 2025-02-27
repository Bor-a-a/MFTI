/*
D11
Дано натуральное число N.
Посчитать количество «1»
в двоичной записи числа.
*/

#include <stdio.h>

int edin (int x) {
    if (x > 0)
        return x%2 + edin (x/2);
    return 0;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", edin (a));
    return 0;
}
