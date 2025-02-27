/*
D15
Дана последовательность ненулевых целых чисел,
завершающаяся числом 0. Ноль в последовательность
 не входит. Определите наибольшее значение числа
 в этой последовательности. Для решения задачи
 необходимо написать рекурсивную функцию вида:
int max_find(int max)
*/

#include <stdio.h>

int max_find(int max) {
    int max_tec;
    scanf ("%d", &max_tec);
    if (max_tec == 0)
        return max;
    if (max_tec > max)
        return (max_find(max_tec));
    return max_find (max);
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", max_find (a));
    return 0;
}
