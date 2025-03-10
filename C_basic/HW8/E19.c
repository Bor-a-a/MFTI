/*
E19
Вывести в порядке следования цифры,
входящие в десятичную запись натурального числа N.
*/

int main (void) {
    int a, counter = 0;
    int mass[15] = {0};
    scanf ("%d", &a);
    while (a > 0) {
        mass[counter] = a%10;
        a = a/10;
        counter++;
    }
    for (int i = counter-1; i >= 0; i--) {
        printf ("%d ", mass[i]);
    }
    return 0;
}
