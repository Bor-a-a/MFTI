/*
E13
Считать массив из 10 элементов и отобрать в другой массив
все числа, у которых вторая с конца цифра (число десятков)
– ноль.
*/

#include <stdio.h>

#define CoM 10

//Процедура ввода массива
void input_massiv (int Massiv[]) {
    for (int i = 0; i < CoM; i++)
        scanf ("%d", &Massiv [i]);
}

//Процедура вывода массива c длиной
void output_massiv_l (int Massiv[], int length) {
    for (int i = 0; i < length; i++)
        printf ("%d ", Massiv[i]);
}

int spec_otbor (int Massiv1[], int Massiv2[], int SizeM) {
    int counter = 0;
    for (int i = 0; i < SizeM; i++) {
        if ((Massiv1[i]/10)%10 == 0) {
            Massiv2[counter] = Massiv1[i];
            counter++;
        }
    }
    return counter;
}

int main (void) {
    int a[CoM], b[CoM];
    input_massiv (a);
    output_massiv_l (b, spec_otbor (a, b, CoM));
    return 0;
}
