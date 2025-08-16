/*
В файле input.txt записаны символы. Необходимо разработать
функцию, которая меняет местами пары соседних символов не
обращая внимание на символы пробел. Если количество символов
нечетно (пробелы не считаем), то последний символ не меняем.
Результат записать в файл output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001

void changer_bp (char S[]) {
    int flag_1 = 0, flag_2 = 0;
    int coord_1 = -1, coord_2 = -1;
    char tmp;
    for (int i = 0; i < strlen (S); i++) {
        if ((flag_1 == 1) && (flag_2 == 1)) {
            printf ("zamena bukv %c & %c (pos %d & %d)\n", S[coord_1],
                    S[coord_2], coord_1, coord_2);
            tmp = S[coord_1];
            S[coord_1] = S[coord_2];
            S[coord_2] = tmp;
            flag_1 = 0;
            flag_2 = 0;
        }
        if ((S[i] != ' ') && (flag_1 == 0)) {
            coord_1 = i;
            flag_1 = 1;
            printf ("Vzyata na zam No 1: %c (pos %d)\n", S[coord_1], coord_1);
        }
        if ((S[i] != ' ') && (i != coord_1)) {
            coord_2 = i;
            flag_2 = 1;
            printf ("Vzyata na zam No 2: %c (pos %d)\n", S[coord_2], coord_2);
        }
    }
    if ((flag_1 == 1) && (flag_2 == 1)) {
        printf ("zamena bukv %c & %c (pos %d & %d)\n", S[coord_1],
                S[coord_2], coord_1, coord_2);
        tmp = S[coord_1];
        S[coord_1] = S[coord_2];
        S[coord_2] = tmp;
        }
}


int main (void) {
    FILE *f, *f1;
    char S1[CoM], S2[CoM];
    int Numbers [CoM];
    int counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    if (fscanf (f, "%[^\n]s", S1) != 1)
        return 1;
    printf ("Schitano: %s\n", S1);
    changer_bp (S1);
    printf ("Posle zameni: %s\n", S1);
    fprintf (f1, "%s", S1);
    fclose (f);
    fclose (f1);
    return 0;
}
