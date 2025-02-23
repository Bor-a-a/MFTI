/*
C4
Описать функцию вычисления f(x) по формуле:
f(x)= x*x при -2 ≤ x < 2;
x*x+4x+5 при x ≥ 2;
4 при x < -2.
Используя эту функцию для n заданных чисел, вычислить f(x).
Среди вычисленных значений найти наибольшее.
*/

int f(int x) {
    if (x <=(-2)) return 4;
    if  (x >= 2) return x*x+4*x+5;
    return x*x;
}

int main (void) {
    int a, max, i = 0;
    while (1) {
        scanf ("%d", &a);
        if (a == 0) break;
        a = f (a);
        if (i == 0) {
            i++;
            max = a;
            }
        if (max < a) max = a;
    }
    printf ("%d", max);
    return 0;
}
