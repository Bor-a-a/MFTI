/*
C19
Составить функцию, которая преобразует текущий
символ цифры в число. Написать программу
считающую сумму цифр в тексте.
int digit_to_num(char c)
*/

#include <stdio.h>

int digit_to_num(char c) {
    if ((c >= '0') && (c <= '9'))
        return (c - '0');
    return 0;
}

int main (void) {
    char a;
    int sum = 0;
    while ((a = getchar()) != '.')
        sum += digit_to_num (a);
    printf ("%d", sum);
    return 0;
}
