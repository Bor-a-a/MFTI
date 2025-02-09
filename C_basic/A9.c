/*
A9
¬вести п€ть чисел и найти наибольшее из них.
*/
#include <stdio.h>

int main (void) {
int a,b,c,d,e,max;
scanf ("%d %d %d %d %d",&a, &b, &c, &d, &e);

max = a;

if (b > max) max = b;
if (c > max) max = c;
if (d > max) max = d;
if (e > max) max = e;

printf ("%d", max);

return 0;
}
