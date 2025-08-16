/*
G2
Считать число N из файла input.txt. Сформировать строку из N символов.
N четное число, не превосходящее 26. На четных позициях должны находится
четные цифры в порядке возрастания, кроме 0, на нечетных позициях -
заглавные буквы в порядке следования в английском алфавите.
Результат записать в файл output.txt
*/

#include <stdio.h>

int main (void) {
    FILE *f, *f1;
    int N, c_dig = 0, c_let = 2;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%d", &N);
    printf ("%d", N);
    for (int i = 1; i <= N; i++) {
        if (i%2 == 0) {
            fprintf (f1, "%d", c_let);
            c_let = (c_let == 8)? 2 : (c_let + 2);
        }
        else {
            fprintf (f1, "%c", ('A' + c_dig));
            c_dig++;
        }
    }
    fclose (f);
    fclose (f1);
    return 0;
}
