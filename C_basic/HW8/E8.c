/*
E8
Считать массив из 12 элементов
и выполнить инверсию для
каждой трети массива.
*/

#include <stdio.h>

#define CoM 12

//Функция ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

void output_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        printf ("%d ", Massiv[i]);
}

void mas_part_rev (int Massiv[], int z) {
    int uchastok = CoM/z; //Определяем кол-во участков
    int vr_centr = 0; //центр текущего участка
    int tmp; //временная переменная
    for (int i = 0; i < z; i++) {
        vr_centr = (uchastok/2) + uchastok*i;
        //printf ("i = %d  z = %d  vr_centr = %d\n", i, z, vr_centr);
        for (int j = (0 + uchastok*i); j < vr_centr; j++) {
            //printf ("j =%d\n", j);
            tmp = Massiv [j];
            Massiv [j] = Massiv [j+((vr_centr-j)*2)-1];
            Massiv [j+((vr_centr-j)*2)-1] = tmp;
        }
    }
}

int main (void) {
    int a [CoM];
    input_massiv (a);
    mas_part_rev (a, 3);
    output_massiv (a);
    return 0;
}

// 0 1 2 3 4 5 6 7 8 9 10 11
// 3 2 1 0 7 6 5 4 11 10 9 8
