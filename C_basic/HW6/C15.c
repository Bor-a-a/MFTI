/*
C15
—оставить функцию логическую функцию,
котора€ определ€ет, верно ли, что в заданном
числе все цифры сто€т по возрастанию.
»спользу€ данную функцию решить задачу.
int grow_up(int n)
*/

#include <stdio.h>

int grow_up(int n) {
    int last_num = 10;
    do {
       // printf ("last num =%d, n = %d\n", last_num, n%10);
        if (last_num <= n%10)
            return 0;
        last_num = n%10;
        n = n/10;

    }
    while (n > 0);
    return 1;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    if (grow_up(a) == 0)
        printf ("NO");
    else
        printf ("YES");
    return 0;
}
