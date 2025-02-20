/*
B3
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
*/

#include <stdio.h>

int main (void) {
    int a, b, summ = 0, i;
    scanf ("%d %d", &a, &b);
    for (i =a; i <= b; i++) {
        summ+=i*i;
        }
    printf ("%d", summ);
return 0;
}
