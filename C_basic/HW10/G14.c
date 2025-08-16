/*
G14
В файле input.txt в одной строке фамилию,
имя и отчество. Сформировать файл
приветствие output.txt, где останутся
имя и фамилия
*/

#include <stdio.h>
#include <string.h>

#define CoM 101


int main (void) {
    FILE *f, *f1;
    char Surname[CoM], Name[CoM];
    //int counter = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");

    fscanf (f, "%s %s", Surname, Name);
    printf ("Hello, %s %s!", Name, Surname);
    fprintf (f1, "Hello, %s %s!", Name, Surname);

    fclose (f);
    fclose (f1);
    return 0;
}
