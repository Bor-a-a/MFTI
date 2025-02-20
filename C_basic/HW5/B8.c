/*
B8
¬вести целое число и определить, верно ли, что в нЄм ровно одна цифра Ђ9ї.
*/

#include <stdio.h>

int main (void) {
    int a, cntr = 0;
    const int OBR = 9;
    scanf ("%d", &a);
    while (a > 0) {
        if ((a%10) == OBR) cntr++;
        a = a/10;
        }
    if (cntr == 1) printf ("YES");
    else printf ("NO");
    return 0;
}
