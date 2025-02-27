/*
D1
Составить рекурсивную функцию,
печать всех чисел от 1 до N
*/

#include <stdio.h>

void rec_ryad (int x) {
    //printf ("%d ", x);
    if (x > 1)
        rec_ryad (x-1);
    printf ("%d ", x);
}

int main (void) {
    int a;
    scanf ("%d", &a);
    rec_ryad (a);
    return 0;
}
