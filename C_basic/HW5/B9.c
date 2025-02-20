/*
B9
¬вести целое число и определить, верно ли, что все его цифры четные.
*/

#include <stdio.h>

int main (void) {
    int a, flag = 0;
    scanf ("%d", &a);
    while (a > 0) {
        if ((a%2) != 0) {
            flag++;
            break;
        }
        a = a/10;
        }
    if (flag > 0) printf ("NO");
    else printf ("YES");
    return 0;
}
