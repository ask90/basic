#include <stdio.h>

int main() {
    int arr[12];
    int n = 12, k = 4;

    // Считываем массив
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Временный массив для результата
    int res[12];

    // Сдвиг вправо на k
    for (int i = 0; i < n; i++) {
        res[(i + k) % n] = arr[i];
    }

    // Выводим результат
    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
