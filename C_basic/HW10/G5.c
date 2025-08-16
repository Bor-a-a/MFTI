/*
G5
В файле input.txt дана символьная строка не более 1000 символов.
Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные.
Результат записать в output.txt.
*/

#include <stdio.h>

#define CoM 1001

char ab_changer (char x) {
    if (x == 'A')
        return 'B';
    if (x == 'a')
        return 'b';
    if (x == 'B')
        return 'A';
    if (x =='b')
        return 'a';
    return x;
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
    S1[counter] = 0;
    for (int i = 0; i < CoM; i++) {
        if (S1[i] == 0)
            break;
        S1[i] = ab_changer (S1[i]);
    }
    fprintf (f1, "%s", S1);
    fclose (f);
    fclose (f1);
    return 0;
}
