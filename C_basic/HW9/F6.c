/*
F6
�������� ������ ���� ���������� �������,
������� ����������, ����� ��, ��� �����
��������� ������� ���� ��� ����������.
���� ����� ���, ������� ���������� 1;
���� ����� ����, �� 0. ������ �������� ���������:
int is_two_same(int size, int a[]);
*/

int is_two_same(int size, int a[]) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        counter = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j])
                counter++;
        }
        if (counter == 2)
            break;
    }
    if (counter == 2)
        return 1;
    else
        return 0;
}
