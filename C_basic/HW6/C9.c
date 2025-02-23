/*
C9
Составить функцию вычисления N!.
Использовать ее при вычислении факториала int factorial(int n)
*/

#include <stdio.h>

int factorial (int n) {
    int i, res = 1;
    for (i = 1; i <= n; i++)
        res = res*i;
    return res;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", factorial(a));
    return 0;
}
