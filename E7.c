#include <stdio.h>

int main() {
    int arr[10];

    // Считываем 10 элементов
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Инвертируем первую половину (0..4)
    for (int i = 0; i < 5 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    // Инвертируем вторую половину (5..9)
    for (int i = 0; i < 5 / 2; i++) {
        int temp = arr[5 + i];
        arr[5 + i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    // Выводим одним циклом
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
