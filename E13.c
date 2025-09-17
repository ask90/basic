#include <stdio.h>

#define N 10

int main() {
    int arr[N], result[N];
    int count = 0;

    // Ввод массива
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Отбор чисел, у которых цифра десятков = 0
    for (int i = 0; i < N; i++) {
        int num = arr[i];
        int tens = (num / 10) % 10; // извлекаем вторую с конца цифру

        if (tens == 0) {
            result[count++] = num;
        }
    }

    // Вывод результата
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
