/*
C14
—оставить функцию логическую функцию, котора€ определ€ет,
верно ли, что сумма его цифр Ц четное число.
»спользу€ эту функцию решить задачу.
*/

int f1 (int x) {
    int sum=0;
    while (x > 0) {
        sum = sum+x%10;
        x = x/10;
    }
    if (sum%2 == 0) return 1;
    return 0;
}

int main (void) {
    int a;
    scanf ("%d", &a);
    if (f1(a) == 0)
        printf ("NO");
    else
        printf ("YES");
    return 0;
}
