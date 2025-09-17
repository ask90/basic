#include <stdio.h>

int main() {
    int arr[10];
    int pos[10], neg[10];
    int pcount = 0, ncount = 0;

    // Считываем массив
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Разделяем
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            pos[pcount++] = arr[i];
        } else if (arr[i] < 0) {
            neg[ncount++] = arr[i];
        }
        // если 0 → игнорируем
    }

    // Выводим сначала положительные
    for (int i = 0; i < pcount; i++) {
        printf("%d ", pos[i]);
    }

    // Потом отрицательные
    for (int i = 0; i < ncount; i++) {
        printf("%d ", neg[i]);
    }

    return 0;
}
