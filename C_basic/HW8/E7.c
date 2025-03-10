/*
E7
Считать массив из 10 элементов и выполнить инверсию
отдельнодля 1-ой и 2-ой половин массива. Необходимо
изменить считанный массив и напечатать его одним циклом.
*/

#include <stdio.h>

#define CoM 10

//Функция ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

void mid_mass_reverse (int Massiv[]) {
    int tmp = 0;             // временная переменная
    int centr = (CoM - 1)/2; // определение центра массива
    int vr_centr = 0;        // центр половины массива
    for (int i = 0; i < CoM; i++) {
        if (i <= centr)
            vr_centr = centr / 2; // определяем центр половины массива
        else
            vr_centr = centr + centr/2 + 1;
        //printf ("i = %d; centr = %d vr_centr =  %d\n", i, centr, vr_centr);
        if (i <= vr_centr) {
            tmp = Massiv [i];
            Massiv [i] = Massiv [2*vr_centr - i];
            Massiv [2*vr_centr - i] = tmp;
            }
        printf ("%d ", Massiv[i]);
    }
}

int main (void) {
int a[CoM];
input_massiv (a);
mid_mass_reverse (a);
return 0;
}
//0 1 2 3 4 5 6 7 8 9
