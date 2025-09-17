#include <stdio.h>

int main() {
    int arr[10];
    int maxFreq = 0, result = 0;

    // Считываем массив
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Считаем частоты
    for (int i = 0; i < 10; i++) {
        int freq = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        // Если нашли чаще встречающийся элемент
        if (freq > maxFreq) {
            maxFreq = freq;
            result = arr[i];
        }
    }

    // Выводим число, встречающееся чаще всего
    printf("%d", result);

    return 0;
}
