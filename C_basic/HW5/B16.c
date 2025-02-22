/*
B16
Составить программу для вычисления НОД с помощью алгоритма Евклида.
Даны два натуральных числа. Найти наибольший общий делитель.
*/

#include <stdio.h>

int main (void) {
    int a, b, min_del;
    scanf ("%d %d", &a, &b);
    while ((a != 0) && (b != 0)) {
        min_del = (a > b)? b : a;
        if (a > b)
            a = a%b;
        else b = b%a;
        }
    printf ("%d", min_del);
    return 0;

    }

