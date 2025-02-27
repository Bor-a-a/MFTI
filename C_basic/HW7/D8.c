/*
D8
Составить рекурсивную функцию,
Выведите все числа от A до B включительно,
в порядке возрастания, если A < B,
или в порядке убывания в противном случае.
*/

#include <stdio.h>

void por (int a, int b) {
    if (a > b)
        printf ("%d ", a);
    if (a != b) {
        if (a > b) {
            por (a-1, b);
        }
        else {
            por (a, b-1);
        }
    }
    if (b >= a)
        printf ("%d ", b);
}

int main (void) {
    int a, b;
    scanf ("%d %d", &a, &b);
    por (a, b);
    return 0;
}
