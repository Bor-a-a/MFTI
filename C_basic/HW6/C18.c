/*
C18
Составить логическую функцию, которая
определяет, что текущий символ это цифра.
Написать программу считающую количество
цифр в тексте.
int is_digit(char c)
*/

#include <stdio.h>

int is_digit(char c) {
    if ((c >= '0') && (c <= '9'))
        return 1;
    return 0;
}

int main (void) {
    char a;
    int sum = 0;
    while ((a = getchar()) != '.')
        sum += is_digit (a);
    printf ("%d", sum);
    return 0;
}
