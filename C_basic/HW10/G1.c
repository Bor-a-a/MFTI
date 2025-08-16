/*
G1
В файле input.txt дана строка.
Вывести ее в файл output.txt
три раза через запятую и показать количество
символов в ней.
*/

#include <stdio.h>
#include <string.h>

#define CoM 101
#define Rep 3

int main (void) {
    FILE *f, *f1;
    char S1 [CoM], n;
    int dlina = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
   /* while ((fscanf(f, "%c", &n)) != EOF) {
        S1[dlina] = n;
        dlina++;
    }
                                                          printf ("%d\n", dlina);
                                                          for (int j = 0; j < dlina; j++) {
                                                          printf("%c, %d\n", S1[j], j);
                                                         }
    S1[dlina] = 0;*/
    fscanf (f, "%[^\n]s", &S1);
    printf ("%s", S1);
    dlina = strlen (S1);
    for (int i = 0; i < Rep; i++) {
        //for (int j = 0; j < dlina; j++) {
            //fprintf (f1, "%c", S1[j]);
        //}
        fprintf (f1, "%s", S1);
        if (i < (Rep - 1))
            fprintf (f1, ", ");
    }
    fprintf (f1, " %d", dlina);
    fclose (f);
    fclose (f1);
    return 0;
}
