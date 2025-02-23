/*
Составить функцию, которая определяет сумму всех
чисел от 1 до N и привести пример ее использования.
*/

#include <stdio.h>

int integr (int x) {
    int i, res=0;
    for (i = 1; i <= x; i++)
        res +=i;
    return res;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", integr(a));
    return 0;
}
