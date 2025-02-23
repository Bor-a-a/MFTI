/*
C13
Составить функцию, которая вычисляет синус как сумму ряда
с точностью 0.001)
cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
float cosinus(float x)
*/

#include <stdio.h>

int fact (int x) {
    int i, res=1;
    for (i = 1; i<=x; i++)
        res = res*i;
    //printf ("facrorial ot %d = %d\n", x, res);
    return res;
}

float step (float a, int x) {
    int i;
    float res=1;
    for (i = 1; i <= x; i++)
        res = res*a;
    //printf ("stepen %d chisla %d = %d\n", x, a, res);
    return res;
}

float cosinus (float x) {
    int i, j=-1;
    float res=1;
    //printf ("x v gradusax = %f\n", x);
    x = x*(2*3.1415926535)/360;
    //printf ("x v radianax = %f\n", x);
    for (i = 2; i <= 12; i = i+2) {
        res = (float) res + (j*step (x, i))/fact (i);
        j = (-1)*j;
    }
return res;
}

int main (void) {
    float a;
    scanf ("%f", &a);
    printf ("%.3f", cosinus (a));
    return 0;
}
