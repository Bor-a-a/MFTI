/*
D10
Дано натуральное число n ≥ 1.
Проверьте, является ли оно простым.
Программа должна вывести слово YES,
если число простое или NO в противном случае.
Необходимо составить рекурсивную функцию
и использовать ее.
int is_prime(int n, int delitel)
*/

#include <stdio.h>

int is_prime(int n, int delitel) {
    if (delitel == 0)
        return 0;
    int chast = ((n%delitel) == 0)? 1 : 0;
    //printf ("Vizov, n = %d, delitel = %d, chast = %d\n", n, delitel, chast);
    if (delitel > 0) {
        return chast + is_prime (n, delitel-1);
    }
    return 0;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    if (is_prime (a, a) == 2)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}
