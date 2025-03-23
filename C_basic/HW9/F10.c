/*
F10
ƒана строка состо€ща€ из маленьких латинских букв 'a'..'z'.
¬ конце строки точка. Ќеобходимо заменить повтор€ющиес€
буквы на <буква><количество повторений>
*/

#include <stdio.h>

#define CoM 1000

int input_string (int size, char a[]) {
    char tmp;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        tmp = getchar ();
        if (tmp == '.')
            break;
        a[i] = tmp;
        counter++;
    }
    return counter;
}

void counter_bukv (int kol, char a[]) {
    char tek_b = a[0];
    int counter = 0;
    for (int i = 0; i <= kol; i++) {
        if (a[i] == tek_b)
            counter++;
        else {
            printf ("%c", tek_b);
            printf ("%d", counter);
            tek_b = a[i];
            counter = 1;
        }
    }
}

int main (void) {
    char a[CoM];
    counter_bukv (input_string (CoM,a), a);
    return 0;
}

