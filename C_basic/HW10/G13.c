/*
G13
В файле input.txt записан полный адрес файла
(возможно, без расширения).
Необходимо изменить его расширение на ".html"
и записать результат в файл output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 101

void extension_changer (char Str[], int point_coord) {
    Str[point_coord+0] = 'h';
    Str[point_coord+1] = 't';
    Str[point_coord+2] = 'm';
    Str[point_coord+3] = 'l';
    Str[point_coord+4] = '\0';
}

int main (void) {
    FILE *f, *f1;
    char S1[CoM];
    int flag = 0, flag_tochki = 0, counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%s", S1);
    printf ("schintana stroka: %s\n", S1);
    printf ("dlina stroki ravna %d\n", strlen (S1));
    for (int i = strlen (S1)-1; i > 0; i--) {
        printf ("Idet poisk, i = %d counter = %d\n", i, counter);
        if (S1[i] == '.') {
            printf ("naidena tochka, rasst %d\n", counter);
            flag_tochki = 1;
            break;
        }
        if ((S1[i] < 'A') || (S1[i] > 'z')) {
            printf ("naiden neveriy symbol %c rasst %d\n", S1[i], counter);
            flag = 1;
            break;
        }
        counter++;
    }
    if ((flag_tochki == 1)&&(flag == 0)) {
        extension_changer (S1, (strlen (S1) - counter));
        printf ("obnaruzneno rasshirenie, rasst %d\n", counter);
            printf ("%s", S1);
        fprintf (f1, "%s", S1);
    }
    else {
        printf ("dobavleno rasshirenie\n");
        printf ("%s.html", S1);
        fprintf (f1, "%s.html", S1);
    }
    fclose (f);
    fclose (f1);
    return 0;
}
