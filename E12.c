#include <stdio.h>

#define N 10

// Сортировка пузырьком по возрастанию
void sortAscending(int arr[], int l, int r) {
    for (int i = l; i < r; i++) {
        for (int j = l; j < r - (i - l); j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

// Сортировка пузырьком по убыванию
void sortDescending(int arr[], int l, int r) {
    for (int i = l; i < r; i++) {
        for (int j = l; j < r - (i - l); j++) {
            if (arr[j] < arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int arr[N];

    // Ввод массива
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортировка первой половины (0..4) по возрастанию
    sortAscending(arr, 0, N/2 - 1);

    // Сортировка второй половины (5..9) по убыванию
    sortDescending(arr, N/2, N - 1);

    // Вывод результата
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
