/*
A19
Даны стороны треугольника a, b, c. Определить существует ли такой треугольник.
*/

#include <stdio.h>

int main (void) {

int a, b, c, i;

scanf ("%d %d %d", &a, &b, &c);

i = 1;

if (a >= (b+c)) i = 0;
if (b >= (a+c)) i = 0;
if (c >= (b+a)) i = 0;

if (i == 1) printf ("YES");
    else
    printf ("NO");

return 0;
}
