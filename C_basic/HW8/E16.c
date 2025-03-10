/*
Дан массив из 10 элементов.
Определить, какое число в массиве встречается
чаще всего. Гарантируется, что такое число ровно 1.
*/

#include <stdio.h>

#define CoM 10

//Процедура ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

int most_freq_elem_mas (int Massiv[]) {
    int num_most_freq;
    int max = 0, counter;
    for (int i = 0; i < CoM; i++) {
            counter = 0;
        for (int j = 0; j < CoM; j++) {
            if (Massiv [i] == Massiv [j])
                counter++;
        }
        if (counter > max) {
            max = counter;
            num_most_freq = i;
        }
    }
    return Massiv [num_most_freq];
}

int main (void) {
    int a [CoM];
    input_massiv (a);
    printf ("%d", most_freq_elem_mas(a));
    return 0;
}
