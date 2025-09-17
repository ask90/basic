#include <stdio.h>
#include <stdlib.h>

// Функция сравнения для qsort
int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;

    int lx = abs(x % 10); // последняя цифра (берём abs, чтобы -17 -> 7)
    int ly = abs(y % 10);

    if (lx == ly) {
        return 0; // если равные последние цифры – порядок сохраняется
    }
    return lx - ly; // сортируем по возрастанию
}

int main() {
    int arr[10];

    // Считываем массив
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортировка
    qsort(arr, 10, sizeof(int), cmp);

    // Вывод результата
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
