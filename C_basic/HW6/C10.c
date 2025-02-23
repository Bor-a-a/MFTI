/*
C10
Составить функцию, печать всех простых множителей числа.
Использовать ее для печати всех простых множителей числа. void print_simple(int n)
*/

#include <stdio.h>

void print_simple (int n) {
    int i, res = 0;
    while (n > 1) {
    for (i = 2; i <= n; i++) {
        if (n%i == 0) {
            res = i;
            n = n/i;
            break;
        }
    }
    printf ("%d ", res);
    }
}

int main (void) {
    int a;
    scanf ("%d", &a);
    print_simple (a);
    return 0;
}
