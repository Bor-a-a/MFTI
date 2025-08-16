/*
G16
В файле input.txt дано предложение.
Необходимо заменить все имена «Ling» на «Cao»
и результат записать в файл output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001

void namechanger (char SIn[], char SOut[], int *pos_1, int *pos_2) {
    int pks = 0; //признак конца строки
    int pkw = 0; //признак конца слова
    int ps = 0; //признак искомого слова
    //проверка, что осталось больше чем две буквы в строке
    if (strlen(SIn) < (*pos_1)+3) {
        SOut[*pos_2] = 'L';
        (*pos_1)++;
        (*pos_2)++;
        return;
    }
    //проверка искомого слова
    if ((SIn[*pos_1+1] == 'i') && (SIn[*pos_1+2] == 'n') && (SIn[*pos_1+3] == 'g') )
        ps = 1;
    //проверка того, что строка кочается словом
    if (strlen (SIn) - *pos_1 == 2)
        pks = 1;
    //проверка того, что слово кончается PS - оказалось, что не надо?
    //if  (((SIn[*pos_1+3] < 'A') ||(SIn[*pos_1+3] > 'z')) && (pks == 0))
        pkw = 1;
    if ((ps == 1) && ((pks == 1) || (pkw == 1))) {
        SOut[*pos_2] = 'C';
        SOut[*pos_2+1] = 'a';
        SOut[*pos_2+2] = 'o';
        *pos_1 = *pos_1+4;
        *pos_2 = *pos_2+3;
    }
        else {
        SOut[*pos_2] = 'L';
        (*pos_1)++;
        (*pos_2)++;
        }
}


int main (void) {
    FILE *f, *f1;
    char S1[CoM], S2[CoM];
    int counter_1 = 0, counter_2 = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    if (fscanf (f, "%[^\n]s", S1) != 1)
        return 0;
    printf ("Schitano: %s\n", S1);
    while (counter_1 < strlen (S1)) {
        if (S1[counter_1] != 'L') {
            S2[counter_2] = S1[counter_1];
            counter_1++;
            counter_2++;
        }
        else
        namechanger (S1, S2, &counter_1, &counter_2);
    }
    S2[counter_2] = '\0';
    printf ("%s", S2);
    fprintf (f1, "%s", S2);
    fclose (f);
    fclose (f1);
    return 0;
}
