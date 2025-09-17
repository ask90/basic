#include <stdio.h>

int main() {
    int arr[12];

    // Считываем 12 элементов
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    // Инверсия 1-й трети (0..3)
    for (int i = 0; i < 2; i++) {
        int temp = arr[i];
        arr[i] = arr[3 - i];
        arr[3 - i] = temp;
    }

    // Инверсия 2-й трети (4..7)
    for (int i = 0; i < 2; i++) {
        int temp = arr[4 + i];
        arr[4 + i] = arr[7 - i];
        arr[7 - i] = temp;
    }

    // Инверсия 3-й трети (8..11)
    for (int i = 0; i < 2; i++) {
        int temp = arr[8 + i];
        arr[8 + i] = arr[11 - i];
        arr[11 - i] = temp;
    }

    // Выводим массив одним циклом
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
