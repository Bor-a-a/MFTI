/*
D5
Перевести натуральное число в двоичную
систему счисления.
Необходимо реализовать рекурсивную функцию.
*/

#include <stdio.h>

int per_dv (int x) {
    if ((x/2) > 0)
        per_dv (x/2);
    printf ("%d", x%2);
}

int main (void) {
    int a;
    scanf ("%d", &a);
    per_dv (a);
    return 0;
}
