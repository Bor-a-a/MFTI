/*
G8
В файле input.txt дана строка, не более 1000 символов,
содержащая буквы, целые числа и иные символы. Требуется
все числа, которые встречаются в строке, поместить в
отдельный целочисленный массив. Например,
если дана строка "data 48 call 9 read13 blank0a",
 то в массиве числа 48, 9, 13 и 0.
 Вывести массив по возрастанию в файл output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001

//возведение в целую степень
int stepen (int osnovanie, int pokazatel) {
    if (pokazatel > 0) return (osnovanie * stepen (osnovanie, pokazatel-1));
    return 1;
}

int dig_find (char Str[], int dig_mass[], int size) {
    int flag = 0, cntr = 0, razryad = 0;
    for (int i = (size-1); i >= 0; i--) {
            printf ("poisk chisel, pos No %d iz %d symdol = %c\n", i, size, Str[i]);
        if ((Str [i] >= '0') && (Str[i] <= '9')) {
            flag = 1;
            printf ("   symbol %c zaspoznan kak chislo %d\n", Str[i], (Str[i]- '0'));
            dig_mass[cntr] = dig_mass [cntr] + (Str[i] - '0')*stepen (10, razryad);
            printf ("   v pos No %d dobavleno chislo %d\n", cntr, dig_mass [cntr]);
            razryad++;
        }
        else {
            if (flag == 1) {
                cntr++;
                flag = 0;
                dig_mass[cntr] = 0;
            }
            razryad = 0;
        }
    }
    if (flag == 1) cntr++;
    return cntr;
}

void output_int (FILE *f, int M[], int size) {
    for (int i = 0; i < size; i++) {
        fprintf (f, "%d ", M[i]);
        printf ("Zapisano No %d = %d\n", i, M[i]);
    }
}

void sort_mass (int M[],int size) {
    int flag = 0, tmp, sch = 1;
    printf ("start sort, %d\n", size);
    while ((flag == 0) && (size > 1)) {
            flag = 1;
        for (int i = 0; i < size-1; i++) {
            sch++;
            printf ("Shag No %d: sravnenie el No %d & %d (%d & %d)\n", sch, i, i+1, M[i], M[i+1]);
            if (M[i] > M[i+1]) {
                printf ("   el %d > %d (%d > %d)\n", i, (i+1), M[i], M[i+1]);
                flag = 0;
                tmp = M[i];
                M[i] = M[i+1];
                M[i+1] = tmp;
            }
        }
    }
    printf ("end sort, %d\n", size);
}

int main (void) {
    FILE *f, *f1;
    char S2 [CoM];
    int S1[CoM], n, counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    /*while ((fscanf(f, "%c", &n)) != EOF) {
        S2[counter] = n;
        counter++;
    }*/
    fscanf (f, "%[^\n]s", &S2);
    printf ("%s\n", S2);
    S1[0] = 0;
    counter = dig_find (S2, S1, strlen(S2));
    printf ("counter = %d\n", counter);
    sort_mass (S1, counter);
    output_int (f1, S1, counter);
    fclose (f);
    fclose (f1);
    return 0;
}
