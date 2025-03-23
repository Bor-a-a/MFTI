/*
F6
Написать только одну логическую функцию,
которая определяет, верно ли, что среди
элементов массива есть два одинаковых.
Если ответ «да», функция возвращает 1;
если ответ «нет», то 0. Строго согласно прототипу:
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
