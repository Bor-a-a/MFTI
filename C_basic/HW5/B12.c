/*
B12
Организовать ввод натурального числа с клавиатуры.
Программа должна определить наименьшую и наибольшую цифры,
которые входят в состав данного натурального числа.
*/

#include <stdio.h>

int main (void) {
    int a, ct, min = 9, max = 0;
    scanf ("%d", &a);
    while (a > 0) {
        ct = a%10;
        if (ct < min) min = ct;
        if (ct > max) max = ct;
        a = a/10;
    }
    printf ("%d %d", min, max);
    return 0;
}
