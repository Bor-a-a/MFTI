/*
С7
Составить функцию, которая переводит число N
из десятичной системы счисления в P-ичную систему счисления.
*/

#include <stdio.h>

int ssi (int n, int p) {
    int res = 0, i = 1;
    while (n > 0) {
        res = res + (n%p)*i;
        i = i*10;
        n = n/p;
    }
    return res;
}

int main (void) {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d", ssi (a, b));
    return 0;
}
