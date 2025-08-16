/*
G22
Известный алгоритм Soundex (https://ru.wikipedia.org/wiki/Soundex) определяет,
похожи ли два английских слова по звучанию. На вход он принимает слово и
заменяет его на некоторый четырёхсимвольный код. Если коды двух слов совпадают,
то слова, как правило, звучат похоже.
Вам требуется реализовать этот алгоритм. Он работает так:
Первая буква слова сохраняется.
В остальной части слова:
буквы, обозначающие, как правило, гласные звуки: a, e, h, i, o, u, w и y —
отбрасываются; оставшиеся буквы (согласные) заменяются на цифры от 1 до 6,
причём похожим по звучанию буквам соответствуют одинаковые цифры:
1: b, f, p, v
2: c, g, j, k, q, s, x, z
3: d, t
4: l
5: m, n
6: r
Любая последовательность одинаковых цифр сокращается до одной такой цифры.
Итоговая строка обрезается до первых четырёх символов. Если длина строки
меньше требуемой, недостающие символы заменяются знаком 0.
Примеры:
аmmonium → ammnm → a5555 → a5 → a500
implementation → implmnttn → i51455335 → i514535 → i514
*/

#include <stdio.h>
#include <string.h>

#define CoM 21

//Сравнение с каждым элементом массива
int svm (char x, char S[]) {
    //printf ("   start svm, x = %c, dlina str = %d\n", x, strlen (S));
    for (int i = 0; i < strlen (S); i++) {
        if (x == S[i]) {
           // printf ("   sovpadenie x c el No %d: %c = %c\n", i, x, S[i]);
            return 1;
        }
    }
    return 0;
}

int zam_S (char x) {
    //printf ("   pusk zam_S, bukva: %c\n",x);
    char Gr_1[] = {'b', 'f', 'p', 'v', '\0'};
    char Gr_2[] = {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z','\0'};
    char Gr_3[] = {'d', 't','\0'};
    char Gr_4[] = {'l','\0'};
    char Gr_5[] = {'m', 'n','\0'};
    char Gr_6[] = {'r','\0'};

    if (svm(x, Gr_1) == 1)
        return 1;
    if (svm(x, Gr_2) == 1)
        return 2;
    if (svm(x, Gr_3) == 1)
        return 3;
    if (svm(x, Gr_4) == 1)
        return 4;
    if (svm(x, Gr_5) == 1)
        return 5;
    if (svm(x, Gr_6) == 1)
        return 6;
    return 0;
}

int main (void) {
    FILE *f, *f1;
    int cntr = 1;
    char S1[CoM], S2[] = {'0', '0', '0', '0', '\0'};
    char Out_gr[] = {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y', '\0'};
    //int *Groups[6] = {&Gr_1[0], &Gr_2[0], &Gr_3[0], &Gr_4[0], &Gr_5[0], &Gr_6[0]};
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%[^\n]s", S1);
    printf ("Schitano: %s\n", S1);

    //printf ("prov: %d   %c\n", zam_S ('m'), zam_S ('m')+48);
    //printf ("prov %d\n", svm ('m', Out_gr));
    printf ("OUT_G: %s\n", Out_gr);

    S2[0] = S1[0];
    for (int i = 1; i < strlen (S1); i++) {
        printf ("i = %d of %d, cntr = %d\n", i, strlen (S1), cntr);
        if (cntr >= 4) {
            printf ("stop po cntr\n");
            break;
        }
        if (svm (S1[i], Out_gr) == 1) {
            printf ("%c podl. iskl\n", S1[i]);
            continue;
        }
        if ((zam_S(S1[i]) + 48) != (S2[cntr-1])) {
            printf ("bukva %c: kod %c (%d)\n", S1[i], zam_S(S1[i]) + 48, zam_S(S1[i]));
            S2[cntr] = zam_S(S1[i]) + 48;
            cntr++;
        }
    }
    /*if (cntr < 4) {
        for (int i = cntr; i < 4; i++)
            S2[i] = '0';
    }*/
    printf ("resultat: %s\n", S2);
    fprintf (f1, "%s", S2);
    fclose (f);
    fclose (f1);
    return 0;
}
