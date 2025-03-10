/*
E17
Дан массив из 10 элементов. В массиве найти элементы,
которые в нем встречаются только один раз, и вывести
их на экран.
*/

#include <stdio.h>

#define CoM 10

//Процедура ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

void lonely_elem_mas (int Massiv[]) {
    int counter;
    for (int i = 0; i < CoM; i++) {
            counter = 0;
        for (int j = 0; j < CoM; j++) {
            if (Massiv [i] == Massiv [j])
                counter++;
        }
        if (counter == 1) {
            printf ("%d ", Massiv[i]);
        }
    }
}

int main (void) {
    int a [CoM];
    input_massiv (a);
    lonely_elem_mas (a);
    return 0;
}

