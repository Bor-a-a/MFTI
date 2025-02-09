/*
A7
¬вести два числа и вывести их в пор€дке возрастани€.
*/
#include <stdio.h>

int main (void) {
int a, b;
scanf ("%d %d", &a, &b);
if (a > b) printf ("%d %d", b, a);
else printf ("%d %d", a, b);
return 0;
}
