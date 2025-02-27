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
        if (max_tec != 0) {
            if (max_tec > max) {
                //printf ("1 max_tec = %d max = %d\n", max_tec, max);
                max_find (max_tec);
            }
            else {
                //printf ("2 max_tec = %d max = %d\n", max_tec, max);
                max_find (max);
            }
            }
        else
        return max;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    printf ("%d", max_find (a));
    return 0;
}
