/*
E20
Переставить цифры в числе так, чтобы
получилось максимальное число.
*/

#include <stdio.h>

int mass_to_int (int Massiv[], int SizeM) {
    int razr = 1, res = 0;
    for  (int i = SizeM-1; i >= 0; i--) {
        res = res + Massiv[i]*razr;
        razr = razr*10;
    }
    return res;
}

void sort_max_num (int Massiv[], int SizeM) {
    int flag = 1, tmp;
    while (flag != 0) {
        flag = 0;
        for (int i = 0; i < SizeM; i++) {
            if (Massiv[i] < Massiv [i+1]) {
                flag = 1;
                tmp = Massiv [i];
                Massiv [i] = Massiv [i+1];
                Massiv [i+1] = tmp;
            }
        }
    }
}

int razb_razr (int x, int Massiv[]) {
    int counter = 0;
    while (x > 0) {
        Massiv[counter] = x%10;
        x = x/10;
        counter++;
    }
    return counter;
}

int main (void) {
    int a, Size_main;
    int mass[15] = {0};
    scanf ("%d", &a);
    Size_main = razb_razr (a, mass);
    sort_max_num (mass, Size_main);
    a = mass_to_int (mass, Size_main);
    printf ("%d", a);
    return 0;
}
