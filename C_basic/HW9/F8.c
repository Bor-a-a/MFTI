/*
F8
В последовательности записаны целые числа от M до N
( M меньше N, M больше или равно 1)в произвольном порядке,
но одно из чисел пропущено (остальные встречаются ровно по одному разу).
N не превосходит 1000. Последовательность заканчивается числом 0.
Определить пропущенное число.
*/

#include <stdio.h>

#define CoM 1000

int input_mass_dl (int Massiv[]) {
    int counter = 0, tek_elem;
    for (int i = 0; i < CoM; i++) {
        scanf ("%d", &tek_elem);
        if (tek_elem == 0) {
            //printf ("Elem No %d is last and %d\n", i, Massiv[i]);
            break;
        }
        Massiv[i] = tek_elem;
        //printf ("scanned elem No %d = %d\n", i, Massiv [i]);
        counter++;
    }
    return counter;
}

int find_max (int Massiv[], int size) {
    int max = Massiv[0];
    for (int i = 0; i < size; i++)
        max = (max > Massiv[i])? max : Massiv[i];
   // printf ("max = %d\n", max);
    return max;
}

int find_min (int Massiv[], int size) {
    int min = Massiv[0];
    for (int i = 0; i < size; i++)
        min = (min < Massiv[i])? min : Massiv[i];
       // printf ("min = %d\n", min);
    return min;
}

int missed_dig (int Massiv[], int size, int min_d, int max_d) {
    int counter;
    for (int i = min_d; i <= max_d; i++) {
        counter = 0;
        for (int j = 0; j <= size; j++) {
            if (i == Massiv[j])
                counter++;
        }
        if (counter == 0)
            return i;
    }
    return 0;
}

int main (void) {
    int a[CoM], sz;
    sz = input_mass_dl (a);
    printf ("%d", missed_dig (a, sz, find_min (a, sz), find_max (a, sz)));
    return 0;
}
