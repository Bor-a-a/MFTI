/*
D3
Дано целое не отрицательное число N.
Выведите все его цифры по одной, в обратном порядке,
разделяя их пробелами или новыми строками.
*/

#include <stdio.h>

void rev_dig (int x) {
    printf ("%d ", x%10);
    if ((x/10) > 0)
        rev_dig (x/10);
}

int main (void) {
    int a;
    scanf ("%d", &a);
    rev_dig (a);
    return 0;
}
