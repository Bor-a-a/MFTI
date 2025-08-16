/*
G7
В файле input.txt считать символьную строку, не более 10 000 символов.
Посчитать количество строчных (маленьких) и прописных (больших) букв
в введенной строке. Учитывать только английские буквы.
Результат записать в файл output.txt.
*/

#include <stdio.h>

#define CoM 10001

int main (void) {
    FILE *f, *f1;
    char S1[CoM], n;
    int counter = 0;
    int c_big =0, c_small = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    while ((fscanf(f, "%c", &n)) != EOF) {
        S1[counter] = n;
        counter++;
    }
    S1[counter] = 0;
    for (int i = 0; i < counter; i++) {
        if ((S1[i] >= 'A') && (S1[i] <= 'Z'))
            c_big++;
        if ((S1[i] >= 'a') && (S1[i] <= 'z'))
            c_small++;
    }
    fprintf (f1, "%d %d", c_small, c_big);
    fclose (f);
    fclose (f1);
    return 0;
}
