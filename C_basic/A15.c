/*
Определить уравнение прямой по координатам двух точек. Уравнение вида
*/
#include <stdio.h>
#include <inttypes.h>

int main (void) {

int32_t x1,x2,y1,y2;
float k, b;

scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);

k = (float) (y2-y1)/(x2-x1);
b = (float) y1 - x1*k;

printf ("%.2f %.2f", k, b);

return 0;
}
