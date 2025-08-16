/*
G11
В файле input.txt дано предложение.
Необходимо определить, сколько слов
заканчиваются на букву 'а'.
Ответ записать в файл output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001


int main (void) {
    FILE *f, *f1;
    char S1[CoM], n;
    int counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");

    while (fscanf (f, "%s", S1) == 1) {
        printf ("Schitano: %s\n", S1);
        if (S1[strlen(S1)-1] == 'a') {
            printf ("%c ravno a, dlina slova %d\n", S1[strlen(S1)-1], strlen (S1));
            counter++;
            }
        }
    printf ("%d", counter);
    fprintf (f1, "%d", counter);
    fclose (f);
    fclose (f1);
    return 0;
}
