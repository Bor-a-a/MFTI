/*
G9
В файле input.txt строка из меленьких и больших английских букв,
знаков препинания и пробелов. Требуется удалить из нее повторяющиеся
символы и все пробелы. Результат записать в файл output.txt.
*/

 #include <stdio.h>

 #define CoM 1001

void output_str (FILE *f, char M[], int size) {
    for (int i = 0; i < size; i++)
        fprintf (f, "%c", M[i]);
}

 int main (void) {
    FILE *f, *f1;
    char S1[CoM], n;
    int counter = 0, flag = 1;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    while ((n = fgetc(f)) != EOF) {
        printf ("%c\n", n);
        flag = 1;
        if (n == ' ')
            continue;
        for (int i = 0; i < counter; i++) {
            if (n == S1[i])
                flag = 0;
        }
        if (flag == 1) {
            S1[counter] = n;
            counter++;
        }
        printf ("flag = %d\n", flag);
    }
    printf ("%d\n", counter);
    output_str (f1, S1, counter);
    fclose (f);
    fclose (f1);
    return 0;
 }
