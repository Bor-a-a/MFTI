/*
A17
¬вести номер мес€ца и вывести название времени года.
*/
#include <stdio.h>
#include <inttypes.h>

int main (void) {

uint8_t a;

scanf ("%" SCNu8, &a);

if ((a <= 2) || (a == 12)) printf ("winter");
if ((a > 2) && (a < 6)) printf ("spring");
if ((a >= 6) && (a < 9)) printf ("summer");
if ((a >= 9) && (a <= 11)) printf ("autumn");

return 0;
}
