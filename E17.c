#include <stdio.h>

int main() {
    int arr[10];

    // Считываем массив
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Проверяем каждое число
    for (int i = 0; i < 10; i++) {
        int freq = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        // Если встречается ровно один раз → выводим
        if (freq == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
