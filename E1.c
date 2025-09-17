#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    double avg;

    // Ввод 5 целых чисел
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Среднее арифметическое
    avg = (double)sum / 5;

    // Вывод с точностью до 3 знаков
    printf("%.3f\n", avg);

    return 0;
}
