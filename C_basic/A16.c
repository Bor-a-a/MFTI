/*
A16
¬вести три числа и определить, верно ли, что они вводились в пор€дке возрастани€.
*/

#include <stdio.h>
#include <inttypes.h>

int main (void) {

int a1, a2, a3;

scanf ("%d %d %d", &a1, &a2, &a3);

//printf ("%d %d %d\n", a1, a2, a3);

if ((a3 > a2) && (a2 > a1))
    printf ("YES");
    else
    printf ("NO");
return 0;
}
