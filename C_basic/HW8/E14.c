/*
E14
Считать массив из 10 элементов и выделить в другой
массив все числа, которые встречаются более одного
раза. В результирующем массиве эти числа не
должны повторяться.
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

int sbor_povt (int Massiv[],int Input_c, int counter) {
    for (int i = 0; i <= counter; i++)
        if (Input_c == Massiv[i])
            return counter;
        Massiv [counter] = Input_c;
        return counter + 1;
}

int otbor_povt (int Massiv1[], int Massiv2[], int SizeM) {
    int counter = 0;
            for (int i = 0; i < SizeM; i++) {
                for (int j = i; j < SizeM; j++) {
                    if (i == j) continue;
                    if (Massiv1[i] == Massiv1[j]) {
                        counter = sbor_povt (Massiv2, Massiv1[i], counter);
                        }
                }
            }
    return counter;
}

int main (void) {
    int a[CoM], b [CoM];
    input_massiv (a);
    output_massiv_l (b, otbor_povt(a, b, CoM));
    return 0;
}
