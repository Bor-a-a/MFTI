/*
В файле input.txt дано предложение требуется разобрать
его на отдельные слова.
Напечатать каждое слово на отдельной строке в файл output.txt.
*/


#include <stdio.h>
#include <string.h>

#define CoM 1001

int main (void) {
    FILE *f, *f1;
    char S1[CoM], n;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");

    while (fscanf (f, "%s", S1) == 1) {
        printf ("%s\n", S1);
        fprintf (f1, "%s\n", S1);
        }
    fclose (f);
    fclose (f1);
    return 0;
}
