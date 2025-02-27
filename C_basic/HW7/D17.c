/*
D17
Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:
A (0, m) = m+1;
A (n+1, 0) = A (n,1);
A (n+1, m+1) = A (n, A (n+1, m))
Реализуйте данную функцию по прототипу
int akkerman(int m, int n)
*/

#include <stdio.h>

int akkerman(int m, int n) {
    if (m == 0)
        return (n+1);
    if (m > 0 && n == 0)
        return akkerman(m - 1, 1);
    return akkerman(m-1, akkerman(m, n-1));
}

int main (void) {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d", akkerman(a, b));
    return 0;
}
