/*
F13
��������� ������� ������� ���������� ����������
��������� �� �������� ������� [from, to] ��� �������.
�������� �������
int count_between(int from, int to, int size, int a[])
*/

int count_between(int from, int to, int size, int a[]) {
    int counter = 0;
    for (int i = from; i <= to; i++) {
        for (int j = 0; j < size; j++) {
            if (a[j] == i)
                counter++;
        }
    }
    return counter;
}
