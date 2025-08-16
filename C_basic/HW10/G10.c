 /*
G10
В файле input.txt дана строка слов, разделенных пробелами.
Найти самое длинное слово и вывести его в файл output.txt.
Случай, когда самых длинных слов может быть несколько, не обрабатывать.
*/

#include <stdio.h>

#define CoM 1001

void print_longest_word (FILE *f, char S1[], int size) {
    int st_word = 0, dl_max = 0, st_word_max = 0;
    printf ("START_FUNK\n");
    for (int i = 0; i < size; i++) {
        if (S1[i] == ' ') {
            if ((i - st_word) >= dl_max) {
                dl_max = i - st_word;
                st_word_max = st_word;
                printf ("FIND MAZ\n");
            }
            st_word = i+1;
        }
    }
    if (dl_max == 0)
        dl_max = size;
    printf ("numer = %d dlina = %d bukva = %c\n", st_word_max, dl_max ,S1[st_word_max]);
    for (int j = 0; j < dl_max; j++) {
        fprintf (f,"%c", S1[st_word_max + j]);
    }
}

int main (void) {
    FILE *f, *f1;
    char S1[CoM], n;
    int counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    while ((fscanf(f, "%c", &n)) != EOF) {
        S1[counter] = n;
        counter++;
    }
    printf ("SCHIT\n");
    print_longest_word (f1, S1, counter);
    fclose (f);
    fclose (f1);
    return 0;
}
