/*
E18
� ��������� ����������� ����� �� 2 �� N ����������,
������� �� ��� ������ ������ �� ����� � ��������� �� 2 �� 9.
*/

int test_kratn (int k, int Massiv[]) {
    for (int i = 2; i <= 9; i++) {
        if (k%i == 0)
            Massiv [i-2]++;
    }
}

int main (void) {
    int a;
    int result [7] = {0};
    scanf ("%d", &a);
    for (int i = 2; i <= a; i++)
        test_kratn (i, result);
    for (int i = 2; i <= 9; i++)
        printf ("%d %d\n", i, result[i-2]);
    return 0;
}
