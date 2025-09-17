#include <stdio.h>

int main() {
    int numbers[12];
    int sum = 0;

    // Считываем 12 целых чисел
    for (int i = 0; i < 12; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Вычисляем среднее арифметическое
    double average = (double)sum / 12;

    // Выводим с точностью до 2 знаков
    printf("%.2f\n", average);

    return 0;
}
