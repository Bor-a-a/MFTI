/*
G6
� ����� input.txt ���������� ������ �� ����� 1000 ��������.
���������� ���������, �������� �� ��� ����������� (���������
�������� ��������� � ����� ������������).
����������� ���������� ������� is_palindrom(str) �
�������� ����� � ���� output.txt.
*/

#include <stdio.h>

#define CoM 1001

int is_palindrom (char str[]) {
    int c = 0;
    while (str[c] != 0)
        c++;
    for (int i = 0; i <= (c - 1)/2; i++) {
        if (str[i] != str[c - 1 - i])
            return 0;
    }
    return 1;
}

int main (void) {
    FILE *f, *f1;
    char S1[CoM];
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%s", &S1);
    if (is_palindrom(S1) == 1)
        fprintf (f1, "YES");
    else
        fprintf (f1, "NO");
    fclose (f);
    fclose (f1);
    return 0;
}
