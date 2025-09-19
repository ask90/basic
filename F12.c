#include <stdio.h>

void change_max_min(int size, int a[]) {
    if (size <= 0) return; // пустой массив, ничего не делаем

    int min_index = 0, max_index = 0;

    // ищем индексы минимального и максимального элементов
    for (int i = 1; i < size; i++) {
        if (a[i] < a[min_index]) min_index = i;
        if (a[i] > a[max_index]) max_index = i;
    }

    // меняем их местами
    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;
}

int main() {
    int arr[] = {3, 8, 1, 5, 10};
    int n = 5;

    change_max_min(n, arr);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Вывод: 3 8 10 5 1

    return 0;
}

