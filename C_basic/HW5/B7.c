/*
B7
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом
*/

#include <stdio.h>

int main (void) {
    int a, flag = 0, last_dig, ost;
    scanf ("%d", &a);
    while ((a/10) > 0) {
        last_dig = a%10;
        //printf ("Last dig = %d\n", last_dig);
        ost = a/10;
        //printf ("ostatok = %d\n", ost);
        while (ost > 0) {
            if ((ost%10) == last_dig) flag++;
            //printf ("   Cycle, ld = %d   srav = %d\n", last_dig, ost%10);
            if (flag > 0) break;
            ost = ost/10;
            }
        if (flag > 0) break;
        a = a/10;
    }
    if (flag == 0) printf ("NO");
    else printf ("YES");
    return 0;
}
