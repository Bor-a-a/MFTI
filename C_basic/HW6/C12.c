/*
C12
Составить функцию, которая вычисляет синус как сумму ряда
(с точностью 0.001)
sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
float sinus(float x)
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

float sinus (float x) {
    int i, j=1;
    float res=0;
    //printf ("x v gradusax = %f\n", x);
    x = x*(2*3.1415926535)/360;
    //printf ("x v radianax = %f\n", x);
    for (i = 1; i <= 11; i = i+2) {
        res = (float) res + (j*step (x, i))/fact (i);
        j = (-1)*j;
    }
return res;
}

int main (void) {
    float a;
    scanf ("%f", &a);
    printf ("%.3f", sinus (a));
    return 0;
}
