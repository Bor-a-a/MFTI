/*
D12
���� ���������� ������������������,
� ������� ������ ����������� ����� k
����������� ����� k ���: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,�
�������� ������ n ������ ���� ������������������.
*/

#include <stdio.h>

void prog (int tek, int targ) {
    if (targ < 0) return;
    for (int i = 1; i <= tek; i++) {
        if (targ < i) break;
        printf ("%d ", tek);
        }
    prog ((tek+1), (targ-tek));
    }

int main (void) {
    int a;
    scanf ("%d", &a);
    prog (1, a);
    return 0;
    }
