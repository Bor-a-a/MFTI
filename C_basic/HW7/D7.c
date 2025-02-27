/*
D7
Составить рекурсивную функцию,
печать всех чисел от N до 1.
*/

#include <stdio.h>

void f1 (int x) {
    if (x > 0) {
        printf ("%d ", x);
        f1 (x-1);
    }
}

int main (void) {
    int a;
    scanf ("%d", &a);
    f1 (a);
    return 0;
}
