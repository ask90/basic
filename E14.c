#include <stdio.h>

int main() {
    int arr[10], res[10], count = 0;

    // Считываем массив
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Проверяем каждое число
    for (int i = 0; i < 10; i++) {
        int freq = 0;

        // Считаем, сколько раз встречается arr[i]
        for (int j = 0; j < 10; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        // Если встречается более 1 раза и ещё не добавлен в результат
        if (freq > 1) {
            int alreadyIn = 0;
            for (int k = 0; k < count; k++) {
                if (res[k] == arr[i]) {
                    alreadyIn = 1;
                    break;
                }
            }
            if (!alreadyIn) {
                res[count++] = arr[i];
            }
        }
    }

    // Выводим результат
    for (int i = 0; i < count; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
