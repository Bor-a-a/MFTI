/*
D14
Дана последовательность целых чисел
через пробел, завершающаяся числом 0.
Выведите все нечетные числа из этой
последовательности, сохраняя их порядок.
*/

#include <stdio.h>

void print_odd (void) {
    int a;
    scanf ("%d", &a);
    if (a != 0) {
        if (a%2 != 0)
            printf ("%d ", a);
        print_odd ();
        }
}

int main (void) {
    print_odd ();
    return 0;
}
