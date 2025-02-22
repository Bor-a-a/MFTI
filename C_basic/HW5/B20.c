/*
B20
Проверить число на простоту.
*/

#include <stdio.h>

int main (void) {
    int a, i, flag = 0;
    scanf ("%d", &a);
    for (i = 1; i <= a; i++) {
        if (a%i == 0)
            flag++;
    }
    if (flag == 2)
        printf ("YES");
    else
        printf ("NO");
    return 0;
    }
