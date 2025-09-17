#include <stdio.h>

int main() {
    int arr[5];
    int min;

    // Ввод 5 целых чисел
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Предположим, что первый элемент минимальный
    min = arr[0];

    // Сравниваем остальные
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Вывод результата
    printf("%d\n", min);

    return 0;
}
