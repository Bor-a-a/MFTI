/*
G19
Разработать функцию дана строка из маленьких английских букв.
Составить из символов палиндром максимальной длинны.
При составлении палиндрома буквы в палиндроме должны быть
 расположены в лексикографическом порядке.
 Записать ответ в файл output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001

//код в букву
char ctl (int x) {
    return 'a'+ x;
}

void let_counter (char S[], int M[]) {
    int num;
    for (int i = 0; i <strlen (S); i++) {
        num = S[i] - 'a';
        M[num]++;
    }
    for (int i = 0; i < 26; i++) {
        if (M[i] != 0) {
            printf ("schitano bukv %c: %d\n", ctl(i), M[i]);
        }
    }
}

int sum_zn (int M[], int Size) {
    int summ = 0;
    for (int i = 0; i < Size; i++)
        summ+=M[i];
    return summ;
}

int main (void) {
    FILE *f, *f1;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    char S1[CoM], S2[CoM];
    int nech = 0, datchik_nech = 0;
    int coord = 0;
    int cntr = 0;
    int bukv [26] = {0};
    fscanf (f, "%[^\n]s", S1);
    printf ("Schitana str:  %s\n", S1);

    let_counter (S1, bukv);

    //Ищем самую частую нечетную букву
    for (int i = 0; i < 26; i++) {
        //printf ("proverka No %d: %c\n", i, ctl(i));
        if (bukv[i]%2 != 0) {
            if (datchik_nech == 0) {
                nech = i;
                datchik_nech = 1;
            }
            if ((datchik_nech == 1) && (bukv[i] > bukv[nech]))
                nech = i;
        }
    }
    printf ("samaya chastaya nech bukva: %c (No %d)\n", ctl(nech), nech);
    //Меняем остальные нечетные на четные (уменьшением на 1)
    for (int i = 0; i < 26; i++) {
        if ((bukv[i]%2 != 0) && (i != nech))
            bukv[i]--;
    }
    coord = sum_zn(bukv,26);
    printf ("dlina palindroma: %d\n", coord);

    for (int i = 0; i < 26; i++) {
        printf ("Dobavl %c\n", ctl(i));
        while (bukv[i] > 1) {
            S2[cntr] = ctl(i);
            S2[coord - cntr - 1] = S2[cntr];
            bukv[i] = bukv[i] - 2;
            printf ("   %c dobavl na pos No %d i %d. Ostalos %d\n", ctl(i),
                    cntr, coord - cntr-1, bukv[i]);
            cntr++;
        }
    }
    if (datchik_nech == 1) {
        S2[coord/2] = ctl(nech);
        printf ("dobavl %c na pos No %d\n", ctl(nech), coord/2);
    }
    S2[coord] = '\0';
    printf ("%s\n", S2);
    fprintf (f1, "%s", S2);

    fclose (f);
    fclose (f1);

    return 0;
}
