/*
G3
В файле input.txt дана строка из не более 1000 символов.
Показать номера символов, совпадающих с последним символом строки.
Результат записать в файл output.txt
*/

#include <stdio.h>

#define CoM 1001

int main (void) {
    FILE *f, *f1;
    char S1[CoM], n;
    int counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    /*while ((fscanf(f, "%c", &n)) != EOF) {
        S1[counter] = n;
        counter++;
    }*/
    //S1[counter] = 0;
    fscanf (f, "%[^\n]s", &S1);
    printf ("%s:  %d symb\n", S1, strlen (S1));
    counter = strlen (S1);
    for (int j = 0; j < counter; j++) {
        printf ("%c ", S1[j]);
    }
    for (int i = 0; i < counter-1; i++) {
        if (S1[i] == S1[counter-1]) {
            fprintf (f1, "%d ", i);
            printf ("%d ", i);
            }
    }
    fclose (f);
    fclose (f1);
    return 0;
}
