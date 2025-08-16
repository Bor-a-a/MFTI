/*
G4
В файле input.txt даны два слова не более 100 символов каждое,
 разделенные одним пробелом. Найдите только те символы слов,
  которые встречаются в обоих словах только один раз.
  Напечатайте их через пробел в файл output.txt в
  лексикографическом порядке.
*/

#include  <stdio.h>
#include <string.h>

#define CoM 101

//Coртировка по возрастанию
void sort_str (char M[], int size) {
    int flag = 0;
    char tmp;
    while (flag == 0) {
        flag = 1;
        for (int i = 0; i < size-1; i++) {
            if (M[i] > M[i+1]) {
                flag = 0;
                tmp = M[i];
                M[i] = M[i+1];
                M[i+1] = tmp;
            }
        }
    }
}

//Перезапись массива только с уникальными элементами
void rew_only_unic (char Entr[], char Exit[], int razmer){
    int cntr1 = 0, cntr2 = 0;
    for (int i = 0; i < razmer; i++) {
        cntr2 = 0;
        for (int j = 0; j < razmer; j++) {
            if (Entr[i] == Entr[j]) cntr2++;
            printf ("sovpad No %d c No %d   %c %c counter = %d\n", i, j, Entr[i], Entr [j], cntr2);
        }
        if (cntr2 > 1) continue;
        Exit [cntr1] = Entr[i];
        printf ("zapisano v vih massiv %c\n", Entr[i]);
        cntr1++;
    }
    Exit[cntr1] = 0;

}

// Вывод массива
void output_str (FILE *f, char M[], int size) {
    for (int i = 0; i < size; i++)
        fprintf (f, "%c ", M[i]);
}


int main (void) {
    FILE *f, *f1;
    char S1[CoM], S2[CoM], S3[1000]; // конечно так неправильно и этот массив может переполниться
    int counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%s %s", &S1, &S2);
    for (int i = 0; i < strlen (S1); i++) {
        for (int j = 0; j < strlen (S2); j++) {
            if (S1[i] == S2[j]) {
                printf ("sovpadene = %c, %d  %d\n", S1[i], i, j);
                S3[counter] = S1[i];
                    counter++;
            }
        }
    }
    printf ("counter = %d\n", counter);
    S3[counter] = 0;
    int s; scanf (&s);
    printf ("%s\n", S3);
    scanf (&s);
    rew_only_unic (S3, S1, counter);
    printf ("%s\n", S1);
    sort_str (S1, strlen (S1));
    output_str (f1, S1, strlen (S1));
    fclose (f);
    fclose (f1);
    return 0;
}
