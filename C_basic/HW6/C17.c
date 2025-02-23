/*
C17
Составить логическую функцию, которая определяет,
верно ли, что в заданном числе сумма цифр равна
произведению.
int is_happy_number(int n)
*/

#include <stdio.h>

int is_happy_number(int n) {
    int sum=0, comp=1;
    while (n > 0) {
        sum = sum + (n%10);
        comp = comp*(n%10);
        //printf ("n = %d sum = %d comp = %d\n", n, sum, comp);
        n = n/10;
    }
    if (sum == comp)
        return 1;
    return 0;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    if (is_happy_number(a) == 1)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}
