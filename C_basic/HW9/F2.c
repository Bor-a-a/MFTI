/*
F2
Написать только одну функцию, которая ставит в начало массива
все четные элементы, а в конец – все нечетные. Не нарушайте
порядок следования чисел между собой. Строго согласно прототипу:.
void sort_even_odd(int n, int a[])
*/

#define CoM 20

void sort_even_odd(int n, int a[]) {
    int odd[n], even [n];
    int oddc = 0, evenc = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i]%2) == 0) {
            even[evenc] = a[i];
            evenc++;
        }
        else {
            odd[oddc] = a[i];
            oddc++;
        }

    }
    //output_massiv (evenc, even);
    //output_massiv (oddc, odd);
    for (int j = 0; j <= evenc; j++)
        a[j] = even [j];
    for (int k = 0; k <= oddc; k++)
        a[k + evenc] = odd[k];
}

//Процедура ввода массива
void input_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        scanf ("%d", &Massiv [i]);
}

//Процедура вывода массива
void output_massiv (int n, int Massiv[]) {
    for (int i = 0; i < n; i++)
        printf ("%d ", Massiv[i]);
        printf ("\n");
}

int main (void) {
    int a[CoM];
    input_massiv (CoM, a);
    sort_even_odd (CoM, a);
    output_massiv (CoM, a);
    return 0;
}
