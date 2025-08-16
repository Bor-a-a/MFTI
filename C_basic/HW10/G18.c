/*
G18
В файле input.txt необходимо удалить все лишние
пробелы (в начале предложения и сдвоенные пробелы).
Для решения задачи разработать функцию.
Результат записать в output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001

void vivod_bez_probelov (FILE *f1, char S[]) {
    int flag = 0, counter = 0;
    for (int i = 0; i < strlen (S); i++) {
        if ((S[i] == ' ') && (flag == 0))
            continue;
        flag = 1;
        printf ("%c", S[i]);
        fprintf (f1, "%c", S[i]);
        if (S[i] == ' ')
            flag = 0;
        }
}

int main (void) {
    FILE *f, *f1;
    char S1[CoM];
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    if (fscanf (f, "%[^\n]s", S1) != 1)
        return 1;
    vivod_bez_probelov (f1, S1);
    fclose (f);
    fclose (f1);
    return 0;
}
