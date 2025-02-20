/*
Дано трехзначное число, напечатать макисмальную цифру
*/

#include <stdio.h>
#include <inttypes.h>

int main (void) {

uint16_t r1, r2, r3, a;

scanf ("%d", &a);

r1 = a%10;
r2 = (a/10)%10;
r3 = (a/100);

a = (r1>r2)? r1: r2;
if (a < r3) a = r3;

printf ("%d", a);

return 0;
}
