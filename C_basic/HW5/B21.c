/*
B20
Дан текст состоящий из английских букв и цифр, заканчивается символом «.»
Перевести все заглавные английские буквы в строчные.
*/

#include <stdio.h>

int main (void) {
    int let;
    while ((let = getchar ())!= '.') {
        if ((let < 'a') && (let >= 'A'))
            let= let+32;
        putchar (let);
    }
    return 0;

}
