/*
Cia очень любит равносторонние треугольники. Он все время
выкладывает их из камней. Ling дал Cia камни и попросил
его составить такой треугольник если это возможно. Помогите
Cia сложить треугольникиспользуя все камни или напечатайте
словo NO, если это невозможно. Во входном файле input.txt
записано некоторое количество символов * (камней).
Необходимо построить равносторонний треугольник используя
все символы * и символ пробел, записать ответ в выходной
файл output.txt. Между соседними символами * строго один
пробел. Если треугольник невозможно составить, используя
все камни, то необходимо записать единственное слово NO
в файл output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 3000

void star_and_space (int x, FILE *fil) {
    //printf ("start s_a_s, x = %d\n", x);
    for (int i = 0; i < x; i++) {
        printf ("* ");
        fprintf (fil, "* ");
    }
    printf ("\n");
    fprintf (fil, "\n");
}

void triangle_generator (int col, FILE *fil) {
    int llayer = col;
    printf ("start trg, %d layers\n", col);
    for (int i = 1; i <= col; i++) {
        //printf ("stroka, i = %d\n", i);
        for (int j = 1; j <= (llayer - i); j++) {
            printf (" ");
            fprintf (fil, " ");
        }
        star_and_space (i, fil);
    }
}

void bad_over (FILE *fil) {
    printf ("NO");
    fprintf (fil, "NO");
}

int starcounter (char S[]) {
    int cntr = 0;
    for (int i = 0; i < strlen (S); i++) {
        if (S[i] == '*')
            cntr++;
    }
    return cntr;
}

int main (void) {
    FILE *f, *f1;
    char S1[CoM];
    int stars = 3; //звезд в ряду
    int layer = 2; //кол-во рядов
    int flag = 1;
    int inc_str; // количество звезд в файле
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");

    fscanf (f, "%[^EOF]s", S1);
    printf ("schitana stroka: %s\n", S1);
    inc_str = starcounter (S1);
    printf ("stars: %d\n", inc_str);
    if (inc_str < 3) {
        bad_over (f1);
        flag = 0;
    }
    while (flag) {
        if (inc_str < stars) {
            printf ("no trgl, %d < %d\n", inc_str, stars);
            flag = 0;
            bad_over (f1);
        }
        if (inc_str == stars) {
            printf ("zapushen vivod, %d ryadov\n", layer);
            triangle_generator (layer, f1);
            flag = 0;
            }
        layer++;
        stars+=layer;
    }
    fclose (f);
    fclose (f1);
    return 0;
}
