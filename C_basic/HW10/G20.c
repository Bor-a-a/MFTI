/*
G20
Считать предложение из файла input.txt и определить можно ли
из английских букв предложения записанного в файле получить
одно слово - палиндром. Ответ напечатать на стандартный поток вывода.
Требуется реализовать логическую функцию и применить ее.
is_palindrom(string)
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001

int is_palindrom (char S[]) {
    int counter, flag = 0;
    for (int i = 'a'; i < 'z'; i++) {
        counter = 0;
        for (int j = 0; j < strlen (S); j++) {
            if (i == S[j])
                counter++;
        }
        if (counter%2 != 0)
            flag++;
        if (flag > 1)
            return 0;
    }
    return 1;
}

int main (void) {
    FILE *f, *f1;
    char S1[CoM];
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    if (fscanf (f, "%[^\n]s", S1) != 1)
        return 1;
    if (is_palindrom (S1) == 0) {
        printf ("NO");
        fprintf (f1, "NO");
    }
        else {
            printf ("YES");
            fprintf (f1, "YES");
        }
    fclose (f);
    fclose (f1);
    return 0;
}
