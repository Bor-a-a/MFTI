/*
F20
Дан целочисленный массив из 10 элементов.
Необходимо определить количество четных и нечетных чисел.
Если количество чётных чисел больше, чем количество нечётных,
заменить каждое нечетное число на произведение нечетных цифр
в его десятичной записи. Если количество нечётных чисел
больше или равно количеству чётных, заменить каждое чётное
число на произведение чётных цифр в его десятичной записи.
*/

#include <stdio.h>

#define CoM 10

int zamena (int x, int key) {
    int result = 1;
    while (x > 0) {
        if (key == 0)
            result *= ((x%10)%2 == 0)? x%10 : 1;
        if (key == 1)
            result *= ((x%10)%2 == 0)? 1 : x%10;
        x = x/10;
    }
    return result;
}

void odd_trans (int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i]%2 != 0)
            a[i] = zamena (a[i], 1);
    }
}

void even_trans (int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i]%2 == 0)
            a[i] = zamena (a[i], 0);
    }
}

//Процедура ввода массива
void input_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        scanf ("%d", &Massiv [i]);
}

//Процедура вывода массива
void output_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        printf ("%d ", Massiv[i]);
        printf ("\n");
}

int main (void) {
    int a[CoM];
    int count_odd = 0, count_even = 0;
    input_massiv (CoM, a);
    for (int i = 0; i < CoM; i++) {
        if  (a[i]%2 == 0)
            count_even++;
        else
            count_odd++;
    }
    if (count_even > count_odd)
        odd_trans (a, CoM);
    else
        even_trans (a, CoM);
    output_massiv (CoM, a);
    return 0;
}

