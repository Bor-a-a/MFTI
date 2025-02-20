/*
А13
На вход подается произвольное трехзначное число, напечать произведение цифр
*/
#include <stdio.h>

int main (void) {

int a, r1, r2, r3;

scanf ("%d", &a);

r1 = a%10;
r2 = (a/10)%10;
r3 = a/100;

printf ("%d", r1*r2*r3);

return 0;
}
