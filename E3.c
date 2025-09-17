#include <stdio.h>

int main() {
    int arr[10];
    int min, max;
    int min_index, max_index;

    // Ввод 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Инициализация начальными значениями
    min = max = arr[0];
    min_index = max_index = 0;

    // Поиск минимума и максимума
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    // Вывод: номер максимума, максимум, номер минимума, минимум
    // Индексация с 1 (чтобы человеку было привычнее)
    printf("%d %d %d %d\n", max_index + 1, max, min_index + 1, min);

    return 0;
}
