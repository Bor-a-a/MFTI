/*
А11
Напечатать сумму максимума и минимума.
*/
#include <stdio.h>

int main (void) {

signed int d1, d2, d3, d4, d5, min, max;

scanf ("%d %d %d %d %d", &d1, &d2,&d3, &d4, &d5);

min = d1; max = d1;

if (d2 > max) max = d2;
if (d3 > max) max = d3;
if (d4 > max) max = d4;
if (d5 > max) max = d5;

if (d2 < min) min = d2;
if (d3 < min) min = d3;
if (d4 < min) min = d4;
if (d5 < min) min = d5;

printf ("%d", max+min);

return 0;

}
