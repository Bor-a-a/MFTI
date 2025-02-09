/*
A5
Ввести три числа, найти их среднее арифметическое.
*/
#include <stdio.h>

int main (void) {

int a,b,c;
float d;

scanf ("%d %d %d", &a, &b, &c);
d = (a+b+c)/3.0;
printf ("%.2f", d);
return 0;
}
