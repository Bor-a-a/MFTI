/*
D13
Составить рекурсивную функцию,
печать всех простых множителей числа.
*/

#include <stdio.h>

void pr_mn (int x) {
    int i;
    if (x >= 2) {
        for (i = 2; i <= x; i++)
            if (x%i == 0) {
                printf ("%d ", i);
                pr_mn (x/i);
                break;
            }
    }
}

int main (void) {
    int a;
    scanf ("%d", &a);
    pr_mn (a);
    return 0;
}
